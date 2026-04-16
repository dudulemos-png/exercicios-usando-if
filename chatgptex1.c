//Leia um número e diga se ele é positivo ou negativo
#include <stdio.h>
int main()
{
    float numero;
    printf ("Digite um numero: ");
    scanf ("%f", &numero);
    if (numero < 0)
    {
        printf ("esse numero e negativo %f", numero);
    }
    if (numero > 0)
    {
        printf ("esse numero e positivo %f", numero);
    }
    if (numero == 0)
    {
        printf ("ele e neutro %f", numero);
    }
    return 0;
}
