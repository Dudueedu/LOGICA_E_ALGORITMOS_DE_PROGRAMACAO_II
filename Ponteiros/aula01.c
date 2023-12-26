//endereço de memoria

//indireção int *countPtr, count;
//count = 7; countPtr = &count;
//inicializado com NULL, 0 ou endereço
// %p ptr (endereço)
// %d *ptr (conteudo)

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b, c, *ptr;
    a = 90;
    b = 2;
    c = 3;
    ptr = &a;
    printf("Valor de ptr: %p \n valor de A: %d \n valor de B: %d \n valor de C: %d", ptr, *ptr, b, c);
    return 0;
}