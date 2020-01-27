//Realiza un programa que almacene los datos de productos en una pila,
//los productos contendrán precio, nombre y cantidad en stock.

#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct product
{
    string Name;
    float prize;
    int quantity;
};
typedef struct product Product;

int main()
{

    stack<Product> pilaTheProduct;

    bool continuar = true;
    do
    {
        char option = 's';
        cout << "\nCantidad de productos actuales: " << pilaTheProduct.size();
        cout << "\nDesea agregar otro producto a la pila? (s/n): ";
        cin >> option;
        cin.ignore();

        if (option == 's' || option == 'S')
        {
            Product unProduct;
            cout << "\nNombre del producto: ";
            getline(cin, unProduct.Name);
            cout << "Precio del producto: $";
            cin >> unProduct.prize;
            cout << "Cantidad del producto: ";
            cin >> unProduct.quantity;
            pilaTheProduct.push(unProduct);
        }
        else if (option == 'n' || option == 'N')
            continuar = false;
        else
            cout << "Opción no válida!" << endl;
    } while (continuar);

    cout << "\nDesapilando los productos..." << endl;
    while (!pilaTheProduct.empty())
    {

        Product ProductOfTheTop = pilaTheProduct.top();
        cout << "Producto [" << ProductOfTheTop.Name;
        cout << ", $" << ProductOfTheTop.prize;
        cout << ", Cantidad: " << ProductOfTheTop.quantity << "]\n";

        pilaTheProduct.pop();
    }
    cout << "La pila de los productos esta vacía." << endl;

    return 0;
}
