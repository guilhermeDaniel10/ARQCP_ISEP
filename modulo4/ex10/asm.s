 .global count_bits_zero

count_bits_zero:
  #prologue
  pushl %ebp
  movl %esp, %ebp
  # Save Registers
	#####################################################
	pushl %ebx
	pushl %edi
	pushl %esi
	######################################################
  
	######################################################
	# Parametros
	######################################################
	movl 8(%ebp), %edi #guarda x em edi
	movl $0, %ecx      #inicializa o incremento a 0
	movl $1, %esi      #esi --> mascara
	movl $0, %eax      #eax contador de zeros
	movl $0, %edx      #edx transformado
	movl $0, %ebx      #resultado

	andl %edi, %esi
	cmpl $0, %esi
	je incrementar

loop:
	movl $1, %esi		#esi --> mascara
	cmpl $32, %ecx
	je end
	
	SHR $1,%edi
	andl %edi, %esi
	cmpl $0, %esi
	je incrementar

	incl %ecx
		jmp loop

incrementar:
	incl %eax
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
