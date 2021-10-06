.section .data

	.global ptrvec
	.global num
 
.section .text
  .global array_sort

array_sort:
  #prologue
  pushl %ebp
  movl %esp, %ebp
  # Save Registers
  #####################################################
  pushl %ebx
  pushl %esi
  pushl %edi
  #####################################################
	movl $0, %ecx  #i
	movl $0, %ebx  #j
	movl $0, %edx  #j+1 
	movl $0, %eax
	movl num,%ecx 
	cmpl $0, %ecx  #esta vazio
	jz end
	
	movl ptrvec, %esi #pointer para edx
	
	decl %ecx
	
    loop:	
		cmpl $0, %ecx
		je end
		movl $0, %ebx
		movl $1, %edx
		pushl %ecx
		
		loop2:
			leal (%esi, %ebx, 4), %edi  #array[i] em %edi
			movl (%edi), %eax
			pushl %eax 
			leal (%esi, %edx, 4), %eax  #array[j+1] em %eax
			movl (%eax), %edi
			popl %eax 
			cmpl %eax, %edi             #array[j]>array[i]
			jl sem_troca
			
			movl %edi, (%esi, %ebx, 4)
			movl %eax, (%esi, %edx, 4)
			
			sem_troca:
				incl %ebx        
				incl %edx	

				decl %ecx
				cmp $0, %ecx
				
			jne loop2
			popl %ecx
		decl %ecx
		jmp loop
		
end:
    # Restore Regsiters
	######################################################
	popl %edi
	popl %esi
	popl %ebx
	######################################################
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
