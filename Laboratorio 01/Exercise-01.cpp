/* Programa: Números primos entre el número 1 y el 100*/

#include <iostream>
#include <stdio.h>

int main()
{
    int contador, n, primo;

    printf( "\n   " );

    for ( n = 1 ; n <= 100 ; n++ )
    {
        primo = 1;
        contador = 2;

        while ( contador <= n / 2 && primo )
        {
            if ( n % contador == 0 )
                primo = 0;

            contador++;
        }

        if ( primo )
            printf( "%d ", n );
    }
  /* Pausa */

    return 0;
}