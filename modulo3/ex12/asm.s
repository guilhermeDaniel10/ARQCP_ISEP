.section .data
  .global num
  .global ptrvec

.section .text
  .global vec_zero

vec_zero:
  #prologue
  pushl %ebp
  movl %esp, %ebp

  movl $0, %eax
  movl num, %ecx
  movl ptrvec, %edx

  loop:
    cmp $0, %ecx
    je end

    cmpw $100, (%edx)
    jl menor_que_cem

    movw $0, (%edx)
    incl %eax
    jmp loop

  menor_que_cem:
    addl $2, %edx
    decl %ecx
    jmp loop

  end:
    # epilogue
  	movl %ebp, %esp  #  restore the previous stack pointer ("clear" the stack)
  	popl %ebp        #  restore the previous stack frame pointer

  	ret
