/******************************************************************************

9.Música dos Elefantes (se balançando)
Escreva um programa que imprima a letra da música “Elefantes se balançavam” até o número informado pelo usuário.
Use um laço de repetição (for, while ou do while).
O padrão da música deve seguir:

1 elefante se balançava numa teia de aranha,
Mas como a teia não se arrebentou,
Foi chamar outro elefante.

2 elefantes se balançavam numa teia de aranha,
Mas como a teia não se arrebentou,
Foram chamar outro elefante.

...

N elefantes se balançavam numa teia de aranha,
Mas como a teia não se arrebentou,
Todos foram para o chão!
    
Regras:
Use o singular para 1 elefante e o plural para os demais.
No último verso, troque a última linha por: “Todos foram para o chão!”

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int contador=0, valor_digitado=0;
    
    printf("\nDigite o número de elefantes: ");
    scanf("%d",&valor_digitado);
    
    printf("\n1 elefante se balançava numa teia de aranha,");
    printf("\nMas como a teia não se arrebentou,");
    printf("\nFoi chamar outro elefante.\n");
    
    for (contador=2; contador<=valor_digitado; contador++)
    {printf("\n%d elefantes se balançavam numa teia de aranha", contador);
    printf("\nMas como a teia não se arrebentou,");
    printf("\nFoi chamar outro elefante.\n");}
    
    printf("\nTodos elefante foram para o chão!");    
 
}
