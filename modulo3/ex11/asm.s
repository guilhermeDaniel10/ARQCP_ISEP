.section .data

	.global ptrvec
	.global num
 
.section .text
  .global  vec_greater20

vec_greater20:
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
		
		addl $4, %edx
		movl (%edx), %ebx
		cmpl $1, (%edx) #compara 1 com o valor dos 32 bits mais significativo
		jge incrementar
		subl $4, %edx
		movl (%edx), %ebx
		cmpl $20, (%edx) #compara 20 com o valor dos 32 bits menos significativos
		jg incrementar
		
		addl $8, %ebx #point to next long long
		incl %ecx #inc counter
		jmp loop 

incrementar:
		incl %eax
		addl $8, %edx
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
