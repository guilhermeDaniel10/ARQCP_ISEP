.section .text
  .global count_even

  count_even:
  	# prologue
  	pushl %ebp 
  	movl %esp, %ebp

  	movl 8(%ebp), %edx
  	movl 12(%ebp), %ecx
  	movl $0, %eax
  	cmpl $0, %ecx
  	jz end

  loop:
  	cmpl $0, %ecx
  	je end

  	testl $1, (%edx)
  	jz even

  	addl $2, %edx

  	decl %ecx
  	jmp loop

  even:
  	incl %eax
  	addl $2, %edx
  	decl %ecx
  	jmp loop
  end:
  	# epilogue
  	movl %ebp, %esp
  	popl %ebp
  	ret
