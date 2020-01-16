//Realiza un registro que almacene la dirección de una persona
#include <iostream>
#include <string>
using namespace std;

struct Address
{
    int HouseNumber;
    string city, state;
};

void printInfo(Address printAd);

int main(void)
{
    Address Ad1;

    cout << " Numero de casa: ";
    cin >> Ad1.HouseNumber;
    cout << " Ciudad: ";
    cin >> Ad1.city;
    cout << " Departamento: ";
    cin >> Ad1.state;
    cout << endl;

    printInfo(Ad1);

    return 0;
}

void printInfo(Address printAd)
{
    cout << " Numero de casa: \t " << printAd.HouseNumber << endl;
    cout << " Ciudad: \t" << printAd.city << endl;
    cout << " Departamento: \t " << printAd.state << endl;
    cout << endl;
}
//???