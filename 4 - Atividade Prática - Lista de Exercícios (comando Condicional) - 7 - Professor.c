#include <stdio.h>

int main(){
    float peso,altura,imc;
    printf("Digite o peso em kg: ");
    scanf("%f",&peso);
    printf("Digite a altura em metros (use .): ");
    scanf("%f",&altura);
    
    imc=peso/(altura*altura);
    printf("Seu imc: %.2f - ",imc);
    
    if (imc<16) printf("Voce está com baixo peso muito grave");
    else if (imc<17) printf("Voce está com baixo peso grave");
    else if(imc<18.5) printf("voce está com baixo peso");
    else if (imc< 25) printf("Voce está no peso ideal");
    else if (imc< 30) printf("Voce está no sobrepeso");
    else if (imc< 35) printf("Voce está na obesidade I");
    else if (imc< 40) printf("Voce está na obesidade II");
    else  printf("Voce está na obesidade III");

}
