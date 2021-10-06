.section .data

	.global ptr1
 
.section .text
  .global encrypt

encrypt:
  #prologue
  pushl %ebp
  movl %esp, %ebp
   	
	movl ptr1, %edx
	movl $0, %eax
	movl $0, %ecx
	
encriptador:
		
		movb (%edx), %cl 
		cmpb $0, %cl
		je end
		
		cmpb $32, %cl
		je estatico
		
		cmpb $97, %cl
		je estatico
		
		addl $2, (%edx)
		incl %eax

estatico:		
		incl %edx
		jmp encriptador 
		
end:
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
