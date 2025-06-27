Desafio 6: Verificação de Ano Bissexto 
Descrição: O programa deve receber um ano e informar se ele é bissexto. 
Dica: Um ano é bissexto se for divisível por 4 e não for divisível por 100, a menos que 
também seja divisível por 400. 
Exemplo de Entrada: 
Digite um ano: 2024 
Saída Esperada: 
O ano 2024 é bissexto. 

/*### **Desafio 6: Verificação de Ano Bissexto**  
**Descrição:** O programa deve receber um ano e informar se ele é bissexto.  
**Dica:** Um ano é bissexto se for divisível por 4 e não for divisível por 100,
a menos que também seja divisível por 400.  

**Exemplo de Entrada:**  
```
Digite um ano: 2024
```
**Saída Esperada:**  
```
O ano 2024 é bissexto.
*/
#include <stdio.h>

int main()
{
    int ano;
    
    printf("digite o ano ");
    scanf("%d",&ano);
    if ((ano%4==0 && ano%100!=0) || (ano%400==0)){
    printf ("o ano %d é bissexto",ano);
    }
    else{
    printf ("o ano %d não é bissexto",ano);
    }
    return 0;
}
