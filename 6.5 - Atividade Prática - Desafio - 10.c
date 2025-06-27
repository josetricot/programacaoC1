Desafio 10: Determinação do Tipo de Triângulo 
Descrição: O programa deve receber três lados de um triângulo e determinar se ele é 
equilátero, isósceles ou escaleno. 
Dica: Compare os três lados usando if para determinar o tipo do triângulo. 
Exemplo de Entrada: 
Digite os três lados do triângulo: 5 5 8 
Saída Esperada: 
O triângulo é isósceles 

/***Desafio 10: Determinação do Tipo de Triângulo**  
**Descrição:** O programa deve receber três lados de um triângulo e
* determinar se ele é equilátero, isósceles ou escaleno.  
**Dica:** Compare os três lados usando `if` para determinar o tipo do triângulo.  

**Exemplo de Entrada:**  
```
Digite os três lados do triângulo: 5 5 8
```
**Saída Esperada:**  
```
O triângulo é isósceles
*/
#include <stdio.h>

#include <stdio.h>

int main()
{
    int lado1, lado2, lado3;

    printf("Digite o lado 1: ");
    scanf("%d", &lado1);
    
    printf("Digite o lado 2: ");
    scanf("%d", &lado2);
    
    printf("Digite o lado 3: ");
    scanf("%d", &lado3);
    
    if (lado1 == lado2 && lado1 == lado3) {
        printf("O triângulo é equilátero\n");
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triângulo é isósceles\n");
    }
    else {
        printf("O triângulo é escaleno\n");
    }

    return 0;
}
