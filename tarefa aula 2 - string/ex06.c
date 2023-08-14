#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarVogais(const char *palavra) {
    int numVogais = 0;
    int tamanho = strlen(palavra);

    for (int i = 0; i < tamanho; i++) {
        char c = tolower(palavra[i]); // Convertendo para minúscula para considerar tanto vogais maiúsculas quanto minúsculas
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            numVogais++;
        }
    }

    return numVogais;
}

void substituirVogais(char *palavra, char caractere) {
    int tamanho = strlen(palavra);

    for (int i = 0; i < tamanho; i++) {
        char c = tolower(palavra[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            palavra[i] = caractere;
        }
    }
}

int main() {
    char palavra[100];
    char caractere;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    int numVogais = contarVogais(palavra);
    printf("A palavra possui %d vogais.\n", numVogais);

    substituirVogais(palavra, caractere);
    printf("Palavra apos a substituição: %s\n", palavra);

    return 0;
}
