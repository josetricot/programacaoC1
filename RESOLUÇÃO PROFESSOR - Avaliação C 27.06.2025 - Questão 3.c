/******************************************************************************

Avaliação C 27/06/2025
Questão 3
Programador: José Athaualpa Kolesny Tricot

Prova de Linguagem de Programação I - Fabio Okuyama 27/06/2025
Envie os fontes .C em um único arquivo .ZIP
Após o envio final, baixe os arquivos e verifique se os arquivos enviados são os corretos.
Nota: os Programas devem conter comentários e o nome do autor.
Os programas devem escrever o nome do programador em algum momento.

Questão 3 (3.0 pt): - Em uma pesquisa os entrevistados devem responder:
- Quantos serviços de streaming eles pagam assinatura (audio e video);
- Quantas horas assistem por semana (número inteiro);
- Informe a sua a renda em salários mínimos (número inteiro)
Elabore um algoritmo que faça as 3 perguntas e leia as respostas dos entrevistados; As entrevistas
devem continuar até que seja informado o número -1 para a quantidade de serviços de streaming.

Calcule e escreva:
a-média de serviços de streaming por entrevistado;
b-Qual a renda média dos entrevistados que assinam mais do que 3 serviços de streaming?
c-Qual a renda média dos entrevistados que usam mais de 20 horas de streaming por semana?
3.1 - Leitura correta dos dados (0,5pts);
3.2 - Estrutura de repetição (1,0pts);
3.3 - Cálculo correto dos itens a/b/c; (1,5pts)
O programa deve conter comentários e o nome do autor.

*******************************************************************************/
#include <stdio.h>
int main(){
    int stream,horas,renda;
    int somaStr=0,entrev=0, renda4Str=0,pess4Str=0,Renda21h=0,pess21h=0;
    do{
        printf("Digite quantos Servicos voce assina: ");
        scanf("%d",&stream);
        if(stream!=-1){
            somaStr=somaStr+stream;
            entrev++;
            printf("Quantas horas voce usa por semana? ");
            scanf("%d",&horas);
            printf("Qual sua renda em Salarios-minimos? ");
            scanf("%d",&renda);
            if(stream>3){
                renda4Str=renda4Str+renda;
                pess4Str++;
            }
            if(horas>20){
                Renda21h=Renda21h+renda;
                pess21h++;
            }
        }
    }while(stream!=-1);
    printf("Media de assinaturas por entrevistado: %.1f\n",somaStr*1.0/entrev*1.0);
    printf("Renda de quem assina mais que 3 servicos: %.1f\n",renda4Str*1.0/pess4Str*1.0 );
    printf("Renda de quem assiste mais que 20h:  %.1f\n",Renda21h*1.0/pess21h*1.0);
}