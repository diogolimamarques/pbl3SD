#include <stdio.h>

int main() {
    /* Adiciona 5 e 5 e guarda o resultado em %eax */
    __asm__ ( "movl $5, %eax;"
                "movl $5, %ebx;"
                "addl %ebx, %eax;"
    );

    /* Subtrai 2 e 3 e guarda o resultado em %eax */
    __asm__ ( "movl $2, %eax;"
                    "movl $3, %ebx;"
                    "subl %ebx, %eax;"
    );

    /* Multiplica 4 e 5 e guarda o resultado em %eax */
    __asm__ ( "movl $4, %eax;"
                    "movl $5, %ebx;"
                    "imull %ebx, %eax;"
    );
    
    /* Pega o valor contido em %eax e guarda na variável localEax. */
    
    register int localEax asm("%eax");
    
    /* Retorna 20 + 1 */
    
    return localEax + 1;    
    
}
