#include <stdio.h>
#include <string.h>

int main(){
char palavra [100];
int i;

printf ("digite uma palavra:");

fgets (palavra,100,stdin);

int tamanho = strlen(palavra);

printf ("palavra invertida:");

for (i = tamanho; i>=0; i --){

printf ("%c", palavra[i]);
}

return 0;


}
