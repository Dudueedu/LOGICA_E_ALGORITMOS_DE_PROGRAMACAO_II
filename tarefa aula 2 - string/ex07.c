#include <stdio.h>
#include <string.h>

void codificarCesar(char *texto, int deslocamento) {
    int tamanho = strlen(texto);

    for (int i = 0; i < tamanho; i++) {
        char c = texto[i];

        if (c >= 'a' && c <= 'z') {
            c = 'a' + (c - 'a' + deslocamento) % 26;
        } else if (c >= 'A' && c <= 'Z') {
            c = 'A' + (c - 'A' + deslocamento) % 26;
        }

        texto[i] = c;
    }
}

int main() {
    char texto[100];
    int deslocamento = 3;

    printf("Digite a string a ser codificada: ");
    fgets(texto, sizeof(texto), stdin);

    codificarCesar(texto, deslocamento);

    printf("Texto codificado: %s\n", texto);

    return 0;
}
