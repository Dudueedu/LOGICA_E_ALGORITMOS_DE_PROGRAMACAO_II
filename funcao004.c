#include <stdio.h>
#include <math.h>

void soma(); 
float potencia();
int resto();

int main(){

    int menu, i, r, x, y;
    float p;

    for(i=0; i<10;i++){
        printf("\n Qual operacao gostaria de realizar? \n [1]soma \n [2]impar ou par \n [3]potencia \n");
        scanf("%d", &menu);
        if (menu == 1)
        {
           soma();
        }else if (menu == 2)
        {
             x = resto();
            if (x == 0){
                printf("\npar");
            }else{
                printf("\nimpar");
            } 
        }else if (menu == 3)
        {
            float x;
            x = potencia();
            printf("\nA potencia e: %0.1f", x);
        }else{
            break;
        }
        
        
        
    }



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