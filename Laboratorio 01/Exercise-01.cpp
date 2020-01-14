#include <iostream>
using namespace std;

//we declare the function suma in a void with a pointer
void suma(int *p)
{
    // we declare the SumaPrimos variable equal to 0
    int SumaPrimos = 0;

    //we declare the "for" loop wichic starts at 0 and is less than the first 25 prime numbers
    for (int i = 0; i < 25; i++)
    {
        SumaPrimos += *(p + i);
    }
    cout << "La suma de los números primos entre el 1 y el 100 es: " << SumaPrimos << endl;
}

int main(void)
{
    //we declare the variables and start thrm at 0
    int n = 100, c = 0, c2 = 0, res = 0, nc = 0, primos = 0;
    //we declare the arrangment with a size of 25, since there are 25 prime numbers between 1 and 100
    int sp[25];

    //we declare the "for" loop without clarifying the variable there so that it isn't destroyed
        for (c = 1; c <= n; c++)
    {
        //we declare the second "for" loop by performing the same actions as in the first "for" loop
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