.section .data

	.global ptrvec
	.global num
 
.section .text
  .global vec_add_one


vec_add_one:
  #prologue
  pushl %ebp
  movl %esp, %ebp
   	
	movl ptrvec, %edx
	movl num, %eax
	movl $0, %ecx
	
move_To:
		
		cmpl %eax,%ecx
		jge end
		
		add $1 ,(%edx)
		add $4 ,%edx
		add $1 ,%ecx
		jmp move_To
	
end:
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
