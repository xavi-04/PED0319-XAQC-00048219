#include <iostream>
#include <string>
using namespace std;

struct Address
{
    int HouseNumber;
    string city, state;
};

struct PersonalInfo{
    Address PersonalAddress;
    string Name;
    int Age;
};



int main(void)
{
    PersonalInfo p1;

    cout << " Nombre: ";
    cin >> p1.Name;
    cout << " Edad: ";
    cin >> p1.Age;
    cout << " NUmero de casa: ";
    cin >> p1.PersonalAddress.HouseNumber;
    cout << " Ciudad: ";
    cin >> p1.PersonalAddress.city;
    cout << " Estado: ";
    cin >> p1.PersonalAddress.state;
    cout << endl;


    return 0;
}

/*void printInfo(Address printAd)
{
    cout << " Numero de casa: \t " << printAd.HouseNumber << endl;
    cout << " Ciudad: \t" << printAd.city << endl;
    cout << " Departamento: \t " << printAd.state << endl;
    cout << endl;
}
//???*/