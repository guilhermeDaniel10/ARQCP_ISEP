.section .text
  .global sum_smaller

sum_smaller:
# prologue
  pushl %ebp
  movl %esp, %ebp

  pushl %esi

  movl $0, %eax
  movl $0, %ecx
  movl $0, %edx

  movl 8(%ebp), %ecx
  movl 12(%ebp), %esi
  movl 16(%ebp), %edx

  cmpl %esi, %ecx
  jl biggerNum2
  addl %esi, %ecx
  movl %ecx, %eax
  movl %esi, (%edx)
  jmp end

  biggerNum2:
    addl %ecx, %esi
    movl %esi, %eax
    movl %ecx, (%edx)
    jmp end

  end:

    popl %esi
  	# epilogue
  	movl %ebp, %esp
  	popl %ebp

  	ret
