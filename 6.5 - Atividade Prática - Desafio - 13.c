/******************************************************************************

### **Desafio 13: Média de Três Números**  
**Descrição:** O programa deve calcular a média de três números fornecidos pelo usuário.  
**Dica:** Some os três números e divida por 3.  

**Exemplo de Entrada:**  
```
Digite três números: 4 8 6
```
**Saída Esperada:**  
```
Média = 6.0


*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1,nota2,nota3,media;
    
    printf("informe a nota 1: ");
    scanf("%f",&nota1);
    printf("informe a nota 2: ");
    scanf("%f",&nota2);
    printf("informe a nota 3: ");
    scanf("%f",&nota3);
    
    media=(nota1+nota2+nota3)/3;
    
    printf("a média é %2.f",media);
    

    return 0;
}
