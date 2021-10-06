.section .text
  .global add_byte

add_byte:
  # prologue
  pushl %ebp
  movl %esp, %ebp

  pushl %ebx
  pushl %esi
  pushl %edi

  movl 8(%ebp), %eax
  movl 12(%ebp), %esi
  movl 16(%ebp), %edi

  movl (%esi), %ebx
  movl (%esi), %ecx
  movl %ecx, (%edi)
  movl $0, %ecx

  addl $4, %esi
  addl $4, %edi

  loop:
    cmpl $0, %ebx
    je end

    movl (%esi), %ecx
    andl $0b00000000000000000000000011111111, %ecx
    addl %eax, %ecx

    movl (%esi), %edx
    andl $0b11111111111111111111111100000000, %edx

    addl %ecx, %edx
    movl %edx, (%edi)

    addl $4, %esi
    addl $4, %edi
    decl %ebx
    movl $0, %eax
    jmp loop

  end:
    popl %ebx
    popl %esi
    popl %edi

    # epilogue
    movl %ebp, %esp
    popl %ebp
    ret
