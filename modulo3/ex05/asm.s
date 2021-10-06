.section .data

	.global ptrvec
	.global num
 
.section .text
  .global vec_sum

vec_sum:
  #prologue
  pushl %ebp
  movl %esp, %ebp
  pushl %ebx
   	
	movl ptrvec, %edx
	movl num, %eax
	movl $0, %ecx
	movl $0, %ebx
	
sum_all:
		
		cmpl %eax,%ecx
		jge end
		
		addl (%edx),%ebx
		add $4 ,%edx
		add $1, %ecx
		jmp sum_all
	
end:
		movl %ebx, %eax
		popl %ebx
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
