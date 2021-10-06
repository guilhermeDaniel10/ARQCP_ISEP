.section .data
  .global greatest

greatest:
# prologue
  pushl %ebp
  movl %esp, %ebp

  pushl %esi

  movl $0, %eax
  movl $0, %ecx
  movl $0, %edx

  movl 8(%ebp), %ecx
  movl 12(%ebp), %edx
  movl 16(%ebp), %esi

  cmpl %edx, %ecx
  jge compare_a_c
  jmp compare_b_c

  compare_a_c:
    cmpl %esi, %ecx
    jl bigger_c
    movl %ecx, %eax
    jmp end

  compare_b_c:
    cmpl %esi, %edx
    jl bigger_c
    movl %edx, %eax
    jmp end

  bigger_c:
    movl %esi, %eax
    jmp end

  end:
    popl %esi
    movl %ebp, %esp
    popl %ebp

    ret
