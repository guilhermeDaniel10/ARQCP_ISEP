.section .text
  .global inc_and_square

inc_and_square:
# prologue
  pushl %ebp
  movl %esp, %ebp

  movl $0, %eax
  movl $0, %ecx
  movl $0, %edx

  movl 8(%ebp), %ecx
  movl 12(%ebp), %edx
  movl 12(%ebp), %eax

  incl (%ecx)
  imull %edx, %eax

  # epilogue
  movl %ebp, %esp
  popl %ebp

  ret
