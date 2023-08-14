#include <stdio.h>
#include <string.h>

int main(){

    char str[21];
    printf("\nDigite um nome com ate 20 caracteries:");
    fgets (str,21,stdin);
    printf("%.*s",4, str);
    return 0;
    }



