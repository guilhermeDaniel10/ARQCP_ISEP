.section .data

	.global ptrvec
	.global num
 
.section .text
  .global  sum_first_byte

sum_first_byte:
  #prologue
  pushl %ebp
  movl %esp, %ebp
  # Save Registers
  #####################################################
  pushl %ebx
  ######################################################
  
	movl $0,   	 %eax #retorno
	movl $0, 	 %ecx #contador
	
	cmpl $0, num      #esta vazio
	jz end
	
	movl ptrvec, %edx #pointer para edx
	
loop:	
		cmpl %ecx, num
		je end
		
		cmpl $0, (%edx)
		jl subtrair
		
		movsbx (%edx), %ebx
		addl %ebx, %eax
		addl $4, %edx
		incl %ecx
		jmp loop 
		
subtrair:
		movl (%edx), %ebx		
		subb %ebx, %eax
		addl $4, %edx
		incl %ecx
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
