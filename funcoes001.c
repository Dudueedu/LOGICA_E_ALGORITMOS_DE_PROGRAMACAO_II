#include <stdio.h>

void soma(); //assinatura da função
//tipo = void, vai retornar NULO
//soma = nome da função

int main(){

    //funções são procedimentos ou subprogramas
    soma();

    return 0;
}

void soma(){
    int a, b, soma;
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &a);
    printf("\nDigite outro numero inteiro: ");
    scanf("%d", &b);
    soma = a+b;
    printf("\n a soma e: %d", soma);
}