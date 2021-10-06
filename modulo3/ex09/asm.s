.section .data

	.global x
	.global ptrvec
	.global num
 
.section .text
  .global vec_search

vec_search:
  #prologue
  pushl %ebp
  movl %esp, %ebp
  # Save Registers
  #####################################################
  pushl %ebx
  ######################################################
  
	movl $0,   	 %eax
	movl num, 	 %ecx
	movl $0,   	 %edx
	
	cmpl $0, %ecx
	jz not_found
		
	movl ptrvec, %ebx
	
finding:
		cmpl %ecx, %eax
		je not_found
		
		movw (%ebx), %dx
		
		cmpw x, %dx
		je found
		
		incl %eax
		addl $2, %ebx
		jmp finding

not_found:
		movl 0, %eax
		jmp end 
		
found:
		movl %ebx, %eax
		
end:
    # Restore Regsiters
	######################################################
	popl %ebx
	######################################################
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
