.section .global
    #todos os inteiros tem que ter um offset multiplo de 4, e os chars nao tem qualquer restricao
  .equ I_OFFSET, 0
  .equ C_OFFSET, 4
  .equ J_OFFSET, 8
  .equ D_OFFSET, 12

.section .text
  .global fill_s1

fill_s1:
	#prologue
	pushl %ebp
	movl %esp, %ebp

  pushl %ebx
  pushl %edi

  movl 8(%ebp), %eax
  movl 12(%ebp), %ecx
  movb 16(%ebp), %dl
  movl 20(%ebp), %ebx
  movb 24(%ebp), %dh

  leal I_OFFSET(%eax, 4), %edi #o primeiro valor é um inteiro, guarda o endereço no edi
  movl %ecx, (%edi)
  #seria o mesmo que fazer add $4 a %eax


  leal C_OFFSET(%eax, 1), %edi
  movb %dl, (%edi)

  leal J_OFFSET(%eax, 4), %edi
  movl %ebx, (%edi)

  leal D_OFFSET(%eax, 1), %edi
  movb %dh, (%edi)

  end:
  popl %ebx
  popl %edi

  # Epilogue
  movl %ebp, %esp
  popl %ebp


  ret
