/******************************************************************************

Teste ponteiros

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int var=15;
    int *ptr;
    
    ptr=&var;
    
    printf("\nConteúdo de var é: %d", var);
    printf("\nO endereço de var é: %p", &var);
    printf("\nConteúdo apontado por ptr é: %d", *ptr);
    printf("\nO endereço apontado por ptr é: %p", ptr);
    printf("\nO endereço do ptr é: %p", &ptr);
    
    *ptr=73;
    
    printf("\n\n");
    printf("\nConteúdo de var é: %d", var);
    printf("\nO endereço de var é: %p", &var);
    printf("\nConteúdo apontado por ptr é: %d", *ptr);
    printf("\nO endereço apontado por ptr é: %p", ptr);
    printf("\nO endereço do ptr é: %p", &ptr);
    
    return 0;
}

// *ptr : apontado por, conteudo do endeço que ptr apontada
// pts : o endeço da variável
// &ptr : o endereço do ponteiro