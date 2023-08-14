#include <stdio.h>

int main(){
    float vetor[10];
    int x;
    float media = 0;

    for(x=0;x<10; x++){
        printf("\n Digite um valor: ");
        scanf("%f", &vetor[x]);
    }

    for(x=0;x<10; x++){
        media = media + vetor[x];
    }
    media = media/10;

    for(x=0;x<10; x++){
        if (media < vetor[x]){
            printf("\n O valor %0.2f e maior que a media!", vetor[x]);
        }
    }

    return 0;

}