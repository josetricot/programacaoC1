#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    char str1[10],str2[20];
    printf("Digite a primeira string: ");
    gets(str1);
    printf("Digite a segunda string: ");
    gets(str2);

    if(strcmp(str1,str2)==0){
        printf("As strings são iguais.\n");
    } else{
        printf("As strings são diferentes.\n");
    }
    
    printf("A primeira ocupa %d bytes e utiliza %d bytes\n",
            sizeof(str1),strlen(str1));
    printf("A segunda ocupa %d bytes e utiliza %d bytes\n",
            sizeof(str2),strlen(str2));
    
    if(strlen(str1)+1+strlen(str2)<sizeof(str1)){
        strcat(str1," ");
        strcat(str1,str2);
        printf("Strings concatenadas: %s",str1);
    } else{
        printf("Erro: tamanhos incompativeis.");
    }   
    return (EXIT_SUCCESS);
}
