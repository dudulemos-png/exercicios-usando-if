//Exercício 4
//Desenvolver um algoritmo para ler um número “x” e calcular e imprimir o valor de “y” de acordo com as condições abaixo:
//y = x , se x < 1;
//y = 0 , se x = 1;
//y = x² , se x > 1;
#include <stdio.h>
#include <math.h>
int main()
{
    float x, y;
    printf ("Digite um numero para ser x: ");
    scanf ("%f", &x);
    if (x < 1)
    {
         printf ("y e igual a %.2f", x);
    }
    if (x == 1)
    {
        y = 0;
        printf ("y e igual a %f", y);
    }
    if (x > 1)
    {
        y = (pow(x,2));
        printf ("y e igual a %f", y);
    }
    return 0;
}