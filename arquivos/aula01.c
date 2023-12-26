//um arquivo é uma coleção de bytes armazenado em dispositivo de armazenamento secundario
//stdio.h
//file*p
//file*fopen(char *nomedoarquivo, char*modo);

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ponteiro_arquivo;
    ponteiro_arquivo = fopen("exemplo.bin", "wb");
    if(ponteiro_arquivo == NULL){
        printf("\nErro na abertura do arquivo!");
        system('pause');
        exit(1);
    }else{
        printf("arquivo aberto com sucesso");
    }

    fclose(ponteiro_arquivo);
    system("pause");
    return 0;
}