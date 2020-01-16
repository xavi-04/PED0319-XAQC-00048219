#include <iostream>
#include <string>
using namespace std;
struct clients
{
    string FullName;
};

int main(void)
{
    cout << "Pepsi's Factory " << endl;
    clients *array;
    int size;

    cout << "Digite la cantidad de clientes: ";
    cin >> size;
    array = new clients[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Nombre del cliente: \t";
        cin >> (array[i].FullName);
        getline(cin, array[i].FullName);
        cin.ignore();
    }
    return 0;
}