#include <iostream>
#include <string>
using namespace std;

struct HomeAppliances
{
    string Name;
    float Cost, SalePrice;
};

void printInfo(struct HomeAppliances Data1);

int main(void)
{
    HomeAppliances *array;
    int size;

    cout << "Digite la cantidad de productos de línea blanca: ";
    cin >> size;
    array = new HomeAppliances[size];

    for (int i = 0; i < size; i++)
    {
        HomeAppliances* Data1;

        cout << "Nombre: \t";
        cin >> array[i].Name;
        cout << "Costo del producto: \t";
        cin >> array[i].Cost;
        cout << "Precio de venta : \t";
        cin >> array[i].SalePrice;
    }
    printInfo(Data1);

    return 0;
}

void printInfo(struct HomeAppliances* Data1)
{
    cout << " Nombre:  " << Data1.Name << endl;
    cout << " Costo del producto: $" << Data1.Cost << endl;
    cout << " Edad: " << Data1.SalePrice << endl;
    cout << endl;
}