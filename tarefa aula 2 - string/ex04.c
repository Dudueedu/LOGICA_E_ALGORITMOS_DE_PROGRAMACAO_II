#include <stdio.h>
#include <string.h>

int main(){
char nome[20];

printf("\n Por favor, insira um nome: ");
fgets(nome, 20, stdin);

if(nome[0]=='a'|| nome[0]=='A'){
    printf("O nome e: %s", nome);
}
else{
    printf ("Seu nome n comeca com a");
}
return 0;
}
