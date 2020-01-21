#include <iostream>
#include <cmath>

using namespace std;

bool inPrime(int n);
int addPrimes(int start, int limit, int primeQ, int aux);

int main(void)
{
    int n = 0;
    cin >> n;

    cout <<addPrimes(2, n, 0) << endl;

    return 0;
}
bool inPrime(int n)
{
    if (n == 2)
        return true;
    else
    {
        for (int i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
            caout << "A " << n << "lo divide"
                return 0;
        }
        return true;
    }
}

int addPrimes(int start, int PrimeQ, int aux)
{
    if (aux == PrimeQ)
    {
        return 0;
        else
        {
            if (isPrime(start) == true)
            {
                cout << start << endl;
                return start + addPrimes(start + 1, PrimeQ, aux + 1);
            }
            else
            {
                return 0 + addPrimes(start + 1, PrimeQ, aux);
            }
        }
    }
}