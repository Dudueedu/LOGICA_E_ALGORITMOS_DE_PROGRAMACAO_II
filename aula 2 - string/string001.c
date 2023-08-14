#include <stdio.h>
#include <string.h>

int main(){

    char texto[20];
    printf("Digite um texto: ");
    // scanf("%s", texto);
    // gets(texto);
    fgets(texto,20,stdin);
    printf("%s", texto);

    return 0;
}