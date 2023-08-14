#include <stdio.h>
#include <string.h>

int main(){

    char nome[21];
    int sexo;
    int idade;

    printf ("\nDigite o seu nome:");
    fgets (nome,21,stdin);

    printf ("\nDigite 1 para femea e 2 para macho:");
    scanf ("%d",&sexo);

    printf ("\nDigite a sua idade:");
    scanf ("%d",&idade);

    if (sexo == 1 && idade < 25){
        
            printf ("\n %s, ACEITA!", nome);
        
    }
    else{
        printf ("\n %s, NAO ACEITA", nome);
    }

return 0;
}
