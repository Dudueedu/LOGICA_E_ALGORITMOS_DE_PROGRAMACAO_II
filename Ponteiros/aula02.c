#include <stdio.h>

void aoCuboReferencia (int *nPtr);

int main(void){
    int num = 5;
    printf("\nO valor inicial: %d", num);
    aoCuboReferencia(&num);
    printf("\nO valor final: %d", num);
}

void aoCuboReferencia(int *nPtr){
    *nPtr = *nPtr * *nPtr * *nPtr;
}