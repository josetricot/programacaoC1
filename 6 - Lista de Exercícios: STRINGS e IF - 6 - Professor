#include <stdio.h>

int main(){
    char str1[10],str2[10];
    printf("Digite a primeira palavra: ");
    gets(str1);
    printf("Digite a segunda palavra: ");
    gets(str2);
    printf("A variavel str1 tem capacidade de %d bytes\n",sizeof(str1));
    printf("A variavel str2 tem capacidade de %d bytes\n",sizeof(str2));
    printf("Primeira palavra: %s, ocupa %d bytes.\n",str1,strlen(str1));
    printf("Segunda palavra: %s, ocupa %d bytes.\n",str2,strlen(str2));
    
    if(strcmp(str1,str2)==0) printf("As palavras sao iguais.\n");
    else printf("As palavras sao diferentes.\n");
    
    if(sizeof(str1)>strlen(str1)+strlen(str2)){
        strcat(str1,str2);
        printf("Palavras juntas: %s",str1);
    } else printf("Erro: nao foi possivel concatenar.");
    
}
