.section .data
  .global ptrvec
  .global num
  .global x

.section .text
  .global vec_diff

vec_diff:
  #prologue
  pushl %ebp
  movl %esp, %ebp

  pushl %ebx
  pushl %edi
  pushl %esi

  movl $0, %eax
  movl $0, %ecx
  movl $0, %edx

  movl ptrvec, %edi
  movl num, %edx
  movw x, %cx

  percorre:
    movw (%edi), %dx
    cmpl $0, %esi
    je end

      pushl %ecx
      pushl %edx
        call exists
      popl %ecx
      popl %edx


    cmpl $1, %eax
    je duplicate

    incl %ebx
    addl $2, %edi
    decl %esi
    jmp percorre

  duplicate:
    addl $2, %edi
    decl %edx
    jmp percorre

  end:
    movl $0, %eax
    movl %ebx, %eax

    popl %ebx
    popl %edi
    popl %esi

    # epilogue
    movl %esi, %esp
    popl %esi
    ret
