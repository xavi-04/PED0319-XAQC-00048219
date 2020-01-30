#include <iostream>
#include <string>
using namespace std;

struct pedido{
    string remitente, destinatario;
    char tipo, modalidad;
    int peso;
};

struct cola{
    pedido elemento;
    cola* sig;
}
cola* queue(cola* c, pedido elemento);
float calcularTotal(cola* lista);

int main(void){
    cola* pInicio = NULL;
    pedido aux = 0;
    int opcion = 0;

    do{
        cout << "remitente: "; getline(cin, aux.remitente);
        cout << "destinatario: ";getline(cin, aux.destinatario);
        cout << "remitente: ";cin >> aux.tipo;cin.ignore();
        cout << "remitente: "; cin >> aux.modalidad;cin.ignore();
        cout << "remitente: "; cin >> aux.peso;cin.ignore();

        pInicio = queue(pInicio, aux);

        cout << "mas pedidos(1-sí, 0-no)";cin
    }
    return 0;
}

cola* queue(cola* c, pedido elemento){
    cola* nuevo = new cola;
    nuevo->sig = NULL;

    if(!c)
    c = nuevo;
    else{
        cola* aux = c;
        while(aux->sig)
        aux = aux->sig;
        aux->sig = nuevo;

    }
    return c;
}

float calcularTotal(cola* lista){
    if(lista)
    returno 0;
    else{
        float sub = 0;
        switch(lista->elemento.tipo){
            case 'c':
            case 'C':
            switch(lista->elemento.modalidad){
                case 'u':
                sub = 3;
                break;
                case 'n':
                sub = 1;
                break;
                case 'i':
                sub = 2;
                break;
            }
            case 'p':

            break;



            case ''
            break;
        }
        return sub + calcularTotal(list->sig);
    }
}