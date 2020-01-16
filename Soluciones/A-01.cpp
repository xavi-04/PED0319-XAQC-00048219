#include <iostream>
using namespace std;

void invertirArreglo(int *A, int *B, int size);

int main(void)
{
    int size = 0;
    cout << "Tamaño arreglos: ";
    cin >> size;

    if (size < 2)
    {
        cout << "ERROR" << endl;
        return 0;
    }

    int *A, *B;
    A = new int[size];
    B = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Valor: ";
        cin >> A[i];
    }

    invertirArreglo(A, B, size);

    for (int i = 0; i < size; i++)
    {
        cout << "Arreglo A: " << A[i] << endl;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Arreglo A: " << B[i] << endl;
    }

    return 0;
}

void invertirArreglo(int *A, int *B, int size)
{
    int aux = 0;

    for (int i = size - 1; i >= 0; i--)
    {
        B[aux] = A[i];
        aux++;
    }
}