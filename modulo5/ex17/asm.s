.section .data

.global return_unionB_b
.equ structSize, 36
.equ offsetUnion, 20

.section .text

return_unionB_b:
# prologo
pushl %ebp
movl %esp, %ebp
pushl %ebx
pushl %esi


movl 8(%ebp), %edx
movl 12(%ebp), %ecx
movl 16(%ebp), %ebx

movl (%edx, %ecx, 4), %esi # copia o endereço que está na linha %ecx

imull $structSize, %ebx # numero de bytes que é preciso avançar até à coluna %ebx e guarda o resultado em esi
addl %ebx, %esi # agora no esi está o apontador para matriz[i][j]

addl $20, %esi # agora no esi está o apontador para matriz[i][j].ub

movb (%esi), %al # copia o valor do char apontado por esi para o al

popl %esi
popl %ebx
# epilogo
movl %ebp, %esp
popl %ebp
ret
