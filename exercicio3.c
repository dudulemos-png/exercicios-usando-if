//Exercício 3
//Desenvolver um algoritmo que leia os coeficientes (a , b e c) de uma equação do segundo grau e calcule suas raízes. O programa deve mostrar, quando possível, o valor das raízes calculadas e a classificação das raízes.
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, delta, x1, x2;
    printf ("Digite o valor de a: ");
    scanf ("%f", &a);
    printf ("Digite o valo de b: ");
    scanf ("%f", &b);
    printf ("Digite o valor de c: ");
    scanf ("%f", &c);

    delta = (pow(b,2) - 4 * a + c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    if (delta > 0)
    {
        printf ("Duas raizes reais\n");
        printf ("X1 = %.2f\n", x1);
        printf ("X2 = %.2f\n", x2);
    }
    if (delta == 0)
    {
        printf ("Uma raiz real\n");
        printf ("X1 = %.2f\n");
    }
    else if (delta < 0)
    {
        printf ("Nao existe raiz real");
    }
    return 0;
}