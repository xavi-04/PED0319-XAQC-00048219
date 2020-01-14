#include <iostream>
using namespace std;

void suma(int *p)
{
    int SumaPrimos = 0;
    for (int i = 0; i < 25; i++)
    {
        SumaPrimos += *(p + i);
    }
    cout << "La suma de los números primos entre el 1 y el 100 es: " << SumaPrimos << endl;
}

int main(void)
{
    int n = 100, c = 0, c2 = 0, res = 0, nc = 0, primos = 0;
    int sp[25];

        for (c = 1; c <= n; c++)
    {
        for (c2 = 1; c2 <= c; c2++)
        {
            res = c % c2;
            if (res == 0)
            {
                nc = nc + 1;
            }
        }
        if (nc == 2)
        {
            sp[primos] = c;
            primos++;
        }
        nc = 0;
    }
    suma(sp);

    return 0;
}