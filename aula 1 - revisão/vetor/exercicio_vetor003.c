#include <stdio.h>

int main(){
    float vetor[1];
    float vetor2[1];
    float vetor3[1];
    int x;

    for(x=0;x<1; x++){
        printf("\n Digite o preco:");
                scanf("%f", &vetor[x]);

    }
    for(x=0;x<1; x++){
        printf("\n Digite o numero de quantidade:");
        scanf("%f", &vetor2[x]);
    }
    for(x=0;x<1; x++){
        vetor3[x]= vetor[x]*vetor2[x];
        printf("\n o estoque e (produto %d): %f", x, vetor3[x]);
    }
}