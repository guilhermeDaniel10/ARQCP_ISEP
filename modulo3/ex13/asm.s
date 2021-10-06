.section .data

	.global ptrvec
	.global num
 
.section .text
  .global keep_positives

keep_positives:
  #prologue
  pushl %ebp
  movl %esp, %ebp
  # Save Registers
  #####################################################
  pushl %ebx
  ######################################################
  
	movl num, 	 %ecx
	movl $0,   	 %eax
	
	cmpl $0, %ecx
	je end
		
	movl ptrvec, %ebx
	
loop:	
		cmpl %ecx, %eax 
		je end
		
		cmpl $0, (%ebx)
		jl negativo 
		
		addl $4, %ebx
		incl %eax
		jmp loop

negativo:
		movl %eax, (%ebx)
		addl $4, %ebx
		incl %eax
		jmp loop 
		

		
end:
    # Restore Regsiters
	######################################################
	popl %ebx
	######################################################
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
