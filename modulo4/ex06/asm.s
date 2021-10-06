.section .text
  .global test_equal

test_equal:
# prologue
  pushl %ebp
  movl %esp, %ebp

  #pushl %esi
  #pushl %edi

  movl $0, %eax
  movl $0, %ecx
  movl $0, %edx

  #movl 8(%ebp), %esi
  #movl 12(%ebp), %edi

    movl 8(%ebp), %edx
    movl 12(%ebp), %ecx

  loop:
    pushl %edx
    pushl %ecx
    #movb (%esi), %cl
    #movb (%edi), %dl

    movb (%ecx), %cl
    movb (%edx), %dl

    cmpb $0, %cl
    je check_equal

    cmpb %cl, %dl
    jne not_equal


    popl %ecx
    popl %edx

    incl %edx
    incl %ecx
    jmp loop

  check_equal:
    cmpb $0, %dl
    jne not_equal
    addl $1, %eax
    jmp end

  not_equal:
    movl $0, %eax

  end:
  #popl %esi
  #popl %edi
  # epilogue
  movl %ebp, %esp
  popl %ebp

  ret
