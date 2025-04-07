/******************************************************************************

10.Música dos Elefantes (Incomodam)
Escreva um programa que imprima a letra da música “Elefantes incomodam muita gente” utilizando apenas laços while e do while. Não é permitido usar for.
Após a impressão da música, o programa deve contar e exibir a quantidade de vezes que aparecem as palavras "incomoda" e "incomodam".
Letra completa da música:

1 elefante incomoda muita gente
2 elefantes incomodam, incomodam muito mais
3 elefantes incomodam muita gente
4 elefantes incomodam, incomodam, incomodam, incomodam muito mais
5 elefantes incomodam muita gente
6 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito mais
7 elefantes incomodam muita gente
8 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito mais
9 elefantes incomodam muita gente
10 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito mais

10 elefantes incomodam muita gente
9 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito menos
8 elefantes incomodam muita gente
7 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito menos
6 elefantes incomodam muita gente
5 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, muito menos
4 elefantes incomodam muita gente
3 elefantes incomodam, incomodam, incomodam muito menos
2 elefantes incomodam muita gente
1 elefante incomoda muito menos
    
Ao final da execução, o programa deve imprimir:
Quantidade total de ocorrências das palavras “incomoda” e “incomodam”.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cont = 3;
    int conta_incomoda = 1;   // "1 elefante incomoda muita gente"
    int conta_incomodam = 2;  // "2 elefantes incomodam, incomodam muito mais"
    
    printf("\n1 elefante incomoda muita gente");
    printf("\n2 elefantes incomodam, incomodam muito mais");
    
    while (cont <= 10) {
        if (cont % 2 != 0) {
            printf("\n%d elefantes incomodam muita gente", cont);
            conta_incomodam++; // Conta o "incomodam" desta linha
            cont++;
        } else {
            printf("\n%d elefantes ", cont);
            
            int repetidor = 0;
            while (repetidor < cont) {
                printf("incomodam");
                if (repetidor < cont - 1) {
                    printf(", ");
                }
                repetidor++;
                conta_incomodam++;
            }
            printf(" muito mais");
            cont++;
        }
    }

    printf("\n");
    cont = 10;

    while (cont >= 1) {
        if (cont == 1) {
            printf("\n1 elefante incomoda muito menos");
            conta_incomoda++;
            cont--;
        } else if (cont % 2 == 0) {
            printf("\n%d elefantes incomodam muita gente", cont);
            conta_incomodam++; // Conta o "incomodam" desta linha
            cont--;
        } else {
            printf("\n%d elefantes ", cont);
            
            int repetidor = 0;
            while (repetidor < cont) {
                printf("incomodam");
                if (repetidor < cont - 1) {
                    printf(", ");
                }
                repetidor++;
                conta_incomodam++;
            }
            printf(" muito menos");
            cont--;
        }
    }

    printf("\n\nA palavra \"incomoda\" apareceu %d vezes.", conta_incomoda);
    printf("\nA palavra \"incomodam\" apareceu %d vezes.\n", conta_incomodam);

    return 0;
}
