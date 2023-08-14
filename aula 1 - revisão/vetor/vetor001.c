#include <stdio.h>

int main(){
    int copia[10];
    int vetor[10];
    int x;

    for(x=0;x<10; x++){
        vetor [x] = x*x;
    }
    for(x=0;x<10; x++){
        copia[x] = vetor[x];
    }
    for(x=0;x<10; x++){
        printf('%d', vetor[x]);
    }
}