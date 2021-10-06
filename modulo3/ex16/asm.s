.section .data
  .global ptr1
  .global ptr2
  .global num

.section .text
  .global swap

swap:
  #prologue
  pushl %ebp
  movl %esp, %ebp

  pushl %esi
  pushl %edi
  pushl %ebx

  movl ptr1, %esi
  movl ptr2, %edi
  movl num, %ebx

  movl $0, %eax
  movl $0, %edx
  movl $0, %ecx

  ciclo:
    cmpl $0, %ebx
    je end

    movb (%esi), %al
    movb (%edi), %cl

    movb %al, (%edi)
    movb %cl, (%esi)

    decl %ebx
    addl $1, %esi
    addl $1, %edi
    jmp ciclo

  end:
    popl %esi
    popl %edi
    popl %ebx

    # epilogue
  	movl %ebp, %esp
  	popl %ebp

  	ret
