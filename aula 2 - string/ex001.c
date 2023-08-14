#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    printf("Digite um nome: ");
    fgets(nome,50,stdin);
    printf("%.*s",4, nome);

}