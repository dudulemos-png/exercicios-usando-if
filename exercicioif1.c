//Exercício 1
//Desenvolver um algoritmo que leia um número inteiro e verifique se o número é divisível por 5 e por 3 ao mesmo tempo.
#include <stdio.h>
int main()
{
    int numero;
    printf ("digite um numero: ");
    scanf ("%d", &numero);
    if (numero % 15 ==0)
    {
        printf ("o numero e divisivel por 5 e por 3");
    }
    return 0;
}
