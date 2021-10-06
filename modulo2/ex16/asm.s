.section .data
  .global num

.section .text
  .global steps


steps:
  #prologue
  pushl %ebp
  movl %esp, %ebp

  movl num, %eax

  movl $3, %ecx

  # alinea a
  imul %ecx, %eax

  # alinea b
  movl $0, %ecx
  movl $6, %ecx

  addl %ecx, %eax

  # alinea c
  movl $0, %ecx
  movl $0, %edx

  cdq

  movl $3, %ecx
  idivl %ecx

  # alinea d
  movl $12, %ecx
  addl %ecx, %eax

  # alinea e
  movl $0, %ecx

  movl num, %ecx
  subl %ecx, %eax

  # alinea f
  movl $0, %ecx

  movl $1, %ecx
  subl %ecx, %eax


  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
