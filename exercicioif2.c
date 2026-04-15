//Exercício 2
//Dados quatro números distintos, desenvolver um algoritmo que determine e imprima a soma dos três menores.
#include <stdio.h>
int main()
{
    float n1, n2, n3, n4, somatotal, maior, somatresmenores;
    printf ("Digite um numero: ");
    scanf ("%f", &n1);
    printf ("Digite outro numero: ");
    scanf ("%f", &n2);
    printf ("digite outro numero: ");
    scanf ("%f", &n3);
    printf ("Digite o ultimo numero: ");
    scanf ("%f", &n4);
    somatotal = n1 + n2 + n3 + n4;
    maior = n1;
    if (n2 > maior)
    {
        maior = n2;
    }
    if (n3 > maior)
    {
        maior = n3;
    }
    if (n4 > maior)
    {
        maior = n4;
    }
    somatresmenores = somatotal - maior;
    printf ("a soma dos tres menores e: %f", somatresmenores);
    return 0;
}
