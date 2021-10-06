.global sum_multiples_x;

sum_multiples_x:
  #prologue
  pushl %ebp
  movl %esp, %ebp
  # Save Registers
	#####################################################
	pushl %ebx
	######################################################
  
	######################################################
	# Parametros
	######################################################
	movl 8(%ebp), %edx  #pointer para o vec	
	movl 12(%ebp),%ecx  #num	
	movl $0, %eax       #sum of all multiples
	movl $0xFF, %ebx    #mascara
	
	shll $8, %ebx
	andl %ecx, %ebx     #second byte of x
	sarl $8,%ebx
	
loop:
	cmp $0,(%edx)
	je end
	
	pushl %edx
	pushl %ecx 
	pushl %eax
	
	movb (%edx), %al
	movb %bl, %cl

	divb %cl
	
	cmp $0, %ah
	je increment 
	
	movl $0, %eax
	movl $0, %ecx
	movl $0, %edx
	popl %eax
	popl %ecx
	popl %edx
	
	incl %edx
	jmp loop
	
increment:

	movl $0, %eax
	movl $0, %ecx
	movl $0, %edx
	popl %eax
	popl %ecx
	popl %edx
	
	addb (%edx), %al
	incl %edx
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
