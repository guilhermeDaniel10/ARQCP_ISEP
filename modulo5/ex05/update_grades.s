.section .text

	.global update_grades


update_grades:

	#prologue
	pushl %ebp
	movl %esp, %ebp


	pushl %ebx
	pushl %esi
	pushl %edi


	movl $0, %eax
	movl $0, %ecx
	movl $0, %ebx


	movl 8(%ebp), %eax #pointer da estrutura
	movl 12(%ebp), %ecx #pointer das novas notas

	movl $0, %ebx #contador array grades

	loop:
		cmp $10, %ebx
		je end

 		leal 4(%eax,%ebx,4), %esi #quarto byte da estrutura corresponde às notas, por isso será necessário iterar por esse apontador
                              # tal apontador está a ser iterado recorrendo ao contador, fazendo a seguinte operação:
                              # 4(byte do pointer na estrutura) + endereço do apontador da estrutura + (4 x contador)

		movl (%ecx), %edx

		movl %edx, (%esi)

		addl $4, %ecx

		incl %ebx

		jmp loop

end:

	# Restore Regsiters
	popl %edi
	popl %esi
	popl %ebx

	# Epilogue
	movl %ebp, %esp 	# restore the previous stack pointer ("clear" the stack)
	popl %ebp 			# restore the previous stack frame pointer


	ret
