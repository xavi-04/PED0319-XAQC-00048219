#include <iostream>//Entrada y salida en consola
//se usa la libreria de math para poner comandos matematicos
#include <math.h>
using namespace std;

//inicia el programa
int main()
{
    //se declaran las diferentes variables
    int a, b, c, d;
    float x, y;

    printf("Ingrese coeficiente a: ");
    scanf("%d", &a);

    //la variable a nunca puede ser 0 ya que seria dividir entre 0 y eso no es sposible
    while (a == 0)
    {
        printf("Ingrese coeficiente a: ");
        scanf("%d", &a);
    }

    printf("Ingrese coeficiente b: ");
    scanf("%d", &b);
    printf("Ingrese coeficiente c: ");
    scanf("%d", &c);

    d = b * b - 4 * a * c;

        if (d > 0)
        {
            //cuando tiene dos soluciones, esta pasa por las formas tanto como la suma de los dos numeros del numerador como la resta de los mismo
            x = (-b + sqrt(d)) / (2 * a);
            y = (-b - sqrt(d)) / (2 * a);
            printf("x1 = %.2f\n", x);
            printf("x2 = %.2f\n", y);
            printf("La ecuacíon contiene dos soluciones\n");
        }
        else if (d == 0)
        {
            x = (-b) / (2 * a);
            printf("x1 = %.2f\n", x);
            printf("La ecuación contiene una solucion \n");
        }
        else
            printf("La ecuación no tiene solucion\n");
    
    //termina el programa
    return 0;
}