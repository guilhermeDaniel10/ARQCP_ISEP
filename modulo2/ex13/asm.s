.section .data
  .global base
  .global height

.section .text
  .global getArea

getArea:
  #prologue
  pushl %ebp       # save previous stack frame pointer
  movl %esp, %ebp

  movl base, %eax
  movl height, %ecx

  # multiplica %ecx por %eax
  # o resultado está em %dx:%ax
  mull %ecx

  movl $0, %ecx
  movl $2, %ecx

  # divide %eax por %ecx, o resto está em %edx e o quociente em %eax
  divl %ecx


movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
popl %ebp    # restore the previous stack frame pointer
ret
