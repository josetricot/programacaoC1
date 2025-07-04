/*### **Desafio 9: Cálculo do IMC**  
**Descrição:** O programa deve calcular o Índice de Massa Corporal (IMC)
de uma pessoa com base no peso e na altura.  
**Dica:** Use a fórmula `IMC = peso / (altura * altura)`.  

**Exemplo de Entrada:**  
```
Digite seu peso (kg): 70
Digite sua altura (m): 1.75
```
**Saída Esperada:**  
```
Seu IMC é 22.86
*/
#include <stdio.h>

int main()
{
    float peso, altura, imc;
    
    printf("Digite peso ");
    scanf("%f",&peso);
    printf("Digite altura ");
    scanf("%f",&altura);
    
    imc=peso/(altura*altura);
    printf("O imc é %.2f",imc);

    return 0;
}
