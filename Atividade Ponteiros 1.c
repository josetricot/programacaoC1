/******************************************************************************

Atividade Ponteiros 1

Descreva o que cada linha faz:

#include<stdio.h>
int main (){
  int x, *px;
  x = 1;
  px = &x;
  printf ("01. x= %d\n", x);
  printf ("02. px= %u\n", px);
  printf ("03. *px+1= %d\n", *px + 1);
  printf ("04. px= %u\n", px);
  printf ("05. *px= %d\n", *px);
  printf ("06. *px+=1= %d\n", *px += 1);
  printf ("07. px= %u\n", px);
  printf ("08. (*px)++= %d\n", (*px)++);
  printf ("09. px= %u\n", px);
  printf ("10. *(px++)= %d\n", *(px++));
  printf ("11. px= %u\n", px);
  printf ("12. *px++= %d\n", *px++);
  printf ("13. px= %u\n", px);
}

*******************************************************************************/
#include<stdio.h>

int main () {
    int x, *px;
    x = 1;
    px = &x;
  
    printf ("01. x= %d\n", x); //escreve que x=1
    printf ("02. px= %u\n", px); //escreve o px que é o endereço da variável x
    printf ("03. *px+1= %d\n", *px + 1); //monstra o valor apontado por px e soma 1 = 2 (não altera o valor de x)
    printf ("04. px= %u\n", px); //novamente escreve o px que é o endereço da variável x, nada mudou
    printf ("05. *px= %d\n", *px); //escreve o valor apontado por px, ou seja, o valore de x que é 1
    printf ("06. *px+=1= %d\n", *px += 1); //incrementa 1 ao valor apontado por px, o x passa de 1 para 2
    printf ("07. px= %u\n", px); //escreve novamente que o px que é o endereço da variável x
    printf ("08. (*px)++= %d\n", (*px)++); //incremnta 1 ao conteúdo apontado por px, ou serja o x que é 2 passa a ser 3
    printf ("09. px= %u\n", px); //escreve novamente que o px que é o endereço da variável x, continua apontando para x
    //agora o bixo pega, 
    printf ("10. *(px++)= %d\n", *(px++)); // incrementa o ponteiro
    printf ("11. px= %u\n", px); //px não aponta mais para x pois foi incrementado
    printf ("12. *px++= %d\n", *px++); //incrementa ao valor apontado em px
    printf ("13. px= %u\n", px); //mostra para onde px está apontando agora
}
