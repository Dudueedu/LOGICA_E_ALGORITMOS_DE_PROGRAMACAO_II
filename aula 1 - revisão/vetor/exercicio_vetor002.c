#include <stdio.h>

int main(){
    float vetor[10];
    int x;

    for(x=0;x<10; x = x+2){
        printf("\n Digite o peso: ");
        scanf("%f", &vetor[x]);
        printf("\n Digite a altura: ");
        scanf("%f", &vetor[x+1]);
    }

    for(x=0;x<10; x++){
        if(x%2==0){
            printf("\n pesos: %f", vetor[x]);
        }
        if(x%2!=0){
            printf("\n alturas: %f", vetor[x]);
        }
    }



    return 0;

}