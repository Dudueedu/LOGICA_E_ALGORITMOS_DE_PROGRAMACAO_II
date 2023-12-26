//malloc (reserva) e free(liberar espaço)

#include <stdio.h>
#include <stdlib.h>

void main(){
    int *ptr_a;
    ptr_a = malloc(sizeof(int));

    if(ptr_a == NULL){
        printf("Memoria insuficiente!");
        exit(1);
    }

    printf("Endereço de ptr_a: %p\n", ptr_a);
    *ptr_a = 90;
    printf("Conteudo de ptr_a: %d\n", *ptr_a);
    free(ptr_a);
}