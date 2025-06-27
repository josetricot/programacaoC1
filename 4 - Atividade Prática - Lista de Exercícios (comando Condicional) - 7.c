/*Exercício 7.  Calcule o IMC. De acordo com (b),
o IMC=peso em kilos dividido pela altura (em metros) ao quadrado.
(a) https://www.mdsaude.com/obesidade/calcule-o-seu-peso-ideal-e-imc/
(b)https://www.programasaudefacil.com.br/calculadora-de-imc
Leia a altura (em metros) e o peso em kilos de uma pessoa,
calcule o IMC e indique a situação de acordo com a tabela em (a).
(Abaixo do peso, peso ideal, sobrepeso, obesidade I, II, III)*/

#include <stdio.h>

int main() {
    float weight, height, imc;
    
    printf("\nDigite o peso da pessoa em kilos: ");
    scanf("%f", &weight);
    
    printf("\nDigite a altura da pessoa em metros: ");
    scanf("%f", &height);
    
    imc = weight / (height * height);
    
    if ( imc < 18.5) {
        printf("\nO IMC é %f - Abaixo do peso", imc);
    } 
    
    else if (imc >= 18.5 && imc <=24.99) {
        printf("\nO IMC é %f - Peso ideal", imc);
    }
    
    else if (imc >= 25 && imc <=29.99) {
        printf("\nO IMC é %f - Sobrepeso", imc);
    }
    
    else if (imc >= 30 && imc <=34.99) {
        printf("\nO IMC é %f - Obesidade I", imc);
    }
    
    else if (imc >= 35 && imc <=39.99) {
        printf("\nO IMC é %f - Obesidade II", imc);
    }
    
    else {
        printf("\nO IMC é %f - Obesidade III", imc);
    }
    
    return 0;
}
