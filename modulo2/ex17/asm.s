.section .data
  .global num1
  .global num2

.section .text
  .global sum
  .global subtraction
  .global multiplication
  .global division
  .global modulus
  .global power2
  .global power3

sum:
  #prologue
  pushl %ebp
  movl %esp, %ebp

  movl $0, %eax
  movl $0, %ecx

  movl num1, %eax
  movl num2, %ecx

  addl %ecx, %eax

  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret

subtraction:
  #prologue
  pushl %ebp
  movl %esp, %ebp

  movl $0, %eax
  movl $0, %ecx

  movl num1, %eax
  movl num2, %ecx

  subl %ecx, %eax

  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret

multiplication:
  #prologue
  pushl %ebp
  movl %esp, %ebp

  movl $0, %eax
  movl $0, %ecx

  movl num1, %eax
  movl num2, %ecx

  imul %ecx, %eax

  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret

division:
  #prologue
  pushl %ebp
  movl %esp, %ebp

  movl $0, %eax
  movl $0, %ecx
  movl $0, %edx

  movl num1, %eax

  cdq

  movl num2, %ecx

  idivl %ecx

  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret

modulus:
  #prologue
  pushl %ebp
  movl %esp, %ebp

  movl $0, %eax
  movl $0, %ecx
  movl $0, %edx

  movl num1, %eax
  cmp $0, %eax

  jl jump_is_less
  jmp end

  jump_is_less:
    movl $-1, %ecx
    imul %ecx, %eax
    jmp end

  end:
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
ret


power2:
  #prologue
  pushl %ebp
  movl %esp, %ebp

  movl $0, %eax
  movl $0, %ecx

  movl num1, %eax
  movl num1, %ecx
  imul %ecx, %eax

  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
ret

power3:
  #prologue
  pushl %ebp
  movl %esp, %ebp

  movl $0, %eax
  movl $0, %ecx
  movl $0, %edx

  movl num1, %eax
  movl num1, %ecx

  imul %ecx, %eax
  imul %ecx, %eax

  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
ret
