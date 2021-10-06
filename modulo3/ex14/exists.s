.section .data
  .global x
  .global ptrvec
  .global num

.section .text
  .global exists

exists:
  #prologue
  pushl %ebp
  movl %esp, %ebp

  pushl %ebx
  pushl %edi
  pushl %esi

  movl $0, %eax
  movl $0, %ecx
  movl $0, %edx

  movw x, %cx
  movl ptrvec, %edx
  movl num, %edi

    loop:
    movw (%edx), %bx

    cmpl $0, %edi
    je end

    cmpw %cx, %bx
    je isEqual

    cmpl $1, %esi
    jg hasDuplicates

    decl %edi
    addl $2, %edx
    jmp loop

    isEqual:
      incl %esi
      addl $2, %edx
      jmp loop

    hasDuplicates:
      movl $0, %eax
      addl $1, %eax
      jmp end

  end:

    popl %edi
    popl %esi
    popl %ebx

    # epilogue
    movl %ebp, %esp
    popl %ebp
    ret
