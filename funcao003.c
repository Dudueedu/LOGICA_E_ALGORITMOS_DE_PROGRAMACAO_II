#include <stdio.h>
#include <math.h>

void soma(); //assinatura da função
//tipo = void, vai retornar NULO
//soma = nome da função
float potencia();

int resto();

int main(){
    float x;
    //funções são procedimentos ou subprogramas
    x = potencia();
    printf("\nA potencia e: %0.1f", x);
    
    return 0;
}

float potencia(){
    float a, b, p;
    printf("\nDigite o valor da base: ");
    scanf("%f", &a);
    printf("\nDigite do expoente: ");
    scanf("%f", &b);
    p = pow(a, b);
    return p;
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