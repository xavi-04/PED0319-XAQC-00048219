#include <iostream>
using namespace std;

//El prototipo de la funcion para invertir el número (línea 18)
int reverseNumber(int num, int aux);
int Number = 0;

//El inicio del programa
int main(void)
{
    cout << " Ingrese el número: ";
    cin >> Number;

    cout << " El número invertido es: " << reverseNumber(Number, 0) << endl;

    return 0;
}

//Se declara la función para invertir el número
int reverseNumber(int Number, int aux)
{
    if(Number == 0)
    {
        //El caso base es que sea 0, por lo tanto, tiene que regrese al auxiliar 
        return aux;
    }
    else
    {
        //Invierte el número escrito por el usario
        return reverseNumber(Number / 10, aux * 10 + Number % 10);
    }
}