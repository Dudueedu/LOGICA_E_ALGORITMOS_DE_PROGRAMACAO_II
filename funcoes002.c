#include <stdio.h>

void soma(); //assinatura da função
//tipo = void, vai retornar NULO
//soma = nome da função

int resto();

int main(){
    int x;
    //funções são procedimentos ou subprogramas
    //soma();
    x = resto();
    if (x == 0){
        printf("par");
    }else{
        printf("impar");
    } 

    return 0;
}

int resto(){
    int n, r;
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &n);
    r = n %2;
    return r;

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