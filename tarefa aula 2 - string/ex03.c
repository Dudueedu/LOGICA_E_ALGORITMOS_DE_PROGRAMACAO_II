#include <stdio.h>
#include <string.h>

int main(){

    char nome[21];
    int letras;
    int i;

    printf ("\nDigite um nome:");
    fgets (nome,21,stdin);

    for (i=0;nome[i]!= '\0'; i++){
        letras++;
    }

    printf ("\n a quantidade de letras no seu nome e: %d",letras-1);

}
