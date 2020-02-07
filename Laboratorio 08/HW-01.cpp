#include <iostream>
#include <string>
using namespace std;

struct node{
    string name;
    string lastName;
    string DUI;
    node* leftNode;
    node* rightNode;
};

node* createLeaf(string lastName, string name, string DUI);
void insertInTree(node** tree, string lastName, string name, string DUI);
void preOrder(node* pTree);
void postOrder(node* pTree);
void inOrder(node* pTree);

int main(){
    node* Tree = NULL;
    bool proceed = true;
    string name, lastName, DUI;

    do{
        int option = 0;
    
        cout << "\n\t1. Agregar\n";
        cout << "\t2. Recorrer\n";
        cout << "\t3. Salir\n";
        cout << "Su opción: ";
        cin >> option;
        cin.ignore();
        switch (option)
        {
        case 1:
            cout << "\nIngrese un nombre: ";
            getline(cin, name);
            cout << "Ingrese un apellido: ";
            getline(cin, lastName);
            cout << "Ingrese el No. de DUI: ";
            getline(cin, DUI);
            insertInTree(&Tree, lastName, name, DUI);
            break;
        case 2:
            cout << "\nRecorrido Pre-Orden: \n";
            preOrder(Tree);
            cout << endl << endl;

            cout << "Recorrido In-Orden: \n";
            inOrder(Tree);
            cout << endl << endl;

            cout << "Recorrido Post-Order: \n";
            postOrder(Tree);
            cout << endl << endl;
            break;
        case 3:
            proceed = false;
            break;
        default:
        cout << "Opción inexistente" << endl;
            break;
        }
    }while(proceed);

    
    return 0;
}

node* createLeaf(string lastName, string name, string DUI){
    node* leaf = new node;
    leaf->name = name;
    leaf->lastName = lastName;
    leaf->DUI = DUI;
    leaf->leftNode = NULL;
    leaf->rightNode = NULL;

    return leaf;
}

void insertInTree(node** tree, string lastName, string name, string DUI){
    if(!(*tree)){
        *tree = createLeaf(lastName, name, DUI);
    }
    else{
        if(name.compare((*tree)->name) <= 0){
            insertInTree(&((*tree)->leftNode), lastName, name, DUI);
        }
        else if(lastName.compare((*tree)->lastName) == 0){
            if(name.compare((*tree)->name) <= 0){
                insertInTree(&((*tree)->leftNode), lastName, name, DUI);
            }
            else{
                insertInTree(&((*tree)->rightNode), lastName, name, DUI);
            }
        }
        else{
            insertInTree(&((*tree)->rightNode), lastName, name, DUI);
        }
    }
}

void preOrder(node* pTree){
    if(!pTree){
        return;
    }
    else{
        cout << pTree->name << ", " << pTree->lastName << ", " << pTree->DUI << "\n";
        preOrder(pTree->leftNode);
        preOrder(pTree->rightNode);
    }
}

void postOrder(node* pTree){
    if(!pTree){
        return;
    }
    else{
        postOrder(pTree->leftNode);
        postOrder(pTree->rightNode);
        cout << pTree->name << ", " << pTree->lastName << ", " << pTree->DUI << "\n";
    }
}

void inOrder(node* pTree){
    if(!pTree){
        return;
    }
    else{
        inOrder(pTree->leftNode);
        cout << pTree->name << ", " << pTree->lastName << ", " << pTree->DUI << "\n";
        inOrder(pTree->rightNode);
    }
}