.section .date
  .global A
  .global B
  .global C
  .global D

.section .text
  .global compute

compute:
  #prologue
  pushl %ebp
  movl %esp, %ebp

  movl A, %ecx
  movl B, %eax


  imull %ecx, %eax

  movl $0, %ecx

  movl C, %ecx
  addl %ecx, %eax

  movl $0, %ecx
  movl D, %ecx

  cmpl $0, %ecx

  jg jump_if_greater
  je jump_if_equals
  jl jump_if_less

  jump_if_equals:
    movl $0, %eax
    jmp end

  jump_if_greater:
    movl $0, %edx
    cdq
    idivl %ecx
    jmp end

  jump_if_less:
    movl $0, %edx
    cdq
    idivl %ecx
    jmp end
end:
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
