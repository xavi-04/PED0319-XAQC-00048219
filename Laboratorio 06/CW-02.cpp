#include <iostream>
#include <string>
#include <cctype>
using namespace std;

struct node
{
    string product;
    float prize;
    node *next;
};

void printMenu(void);
string convertString(string product);
node *addElement(node *list, string product, float prize);
int searchStock(node *list, string product);

int menu(void)
{

    string product = " ";
    float prize = 0;
    int option = 0;
    int auxStock = 0;

    do
    {
        printMenu();
        cin >> option;
        cin.ignore();

        switch (option)
        {
        case 1:
            cout << "Ingrese datos del producto" << endl;
            cout << "NOmbre:\t";
            cin >> product;
            cout << "Precio:\t";
            cin >> prize;
            product = convertString(product);
            list = addElement(list, product, prize);
            break;

        case 2:
            cout << "Ingrese el producto a buscar" << endl;
            cout << "producto:\t";
            cin >> product;
            product = convertString(product);

            auxStock = searchStock(list, product);

            (auxStock == 0) ? cout << "Sin stock" : cout << "Cantidad en stock:\t" << auxStock;
            break;
        case 0:
            cout << "saliendo......." << endl;
            break;
        }

    } while (option != 0);
}

string convertString(string product)
{
    string aux = " ";

    for (int i = 0; i < product.length(); i++)
        aux += toupper(product[i]);

    return aux;
}

void printMenu(void)
{

}

node *addElement(node *list, string product, float prize)
{int searchStock(node *list, string product)
    node *newNode = new node;
    newNode->prize = prize;
    newNode->product = product;
    newNode->next = NULL;

    if (list)
        list = newNode;
    else
    {
        node *aux = list;

        while (aux->next != NULL)
            aux = aux->next;
        aux->next = newNode;
    }

    return list;
}

int searchStock(node *list, string product)
{

}