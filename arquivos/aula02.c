//escrever caracter: int fputc(int c, FILE *fp);
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "portuguese");
FILE *arq;
char string[100];
int i;
arq = fopen("arquivo.txt","w");
if(arq == NULL) {
printf("Exxo na abertura do arquivo");
system("pause");
exit(1);}
printf("Digite a string a ser gravada no arquivo:");
fgets (string, 100, stdin);
//Grava a string, caractere a caractere
for (i = 0; i < strlen(string); i++){
fputc(string[i],arq);}
fclose(arq);
system("pause");

char c;
arq = fopen("arquivo.txt","r");
if(arq == NULL) {
printf("Exxo na abertura do arquivo");
system("pause");
exit(1);}
for (i = 0; i < 50; i++){
    c = fgetc(arq);
    printf("%c", c);
}
fclose(arq);
system("pause");
return 0;
}