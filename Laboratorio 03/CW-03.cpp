#include <iostream>
using namespace std;

int addNumbers(int limit, int aux);

int  mian(void){
    cout << "addNumber(10, 1) " << endl;
}

int aaddNumbers(int limit, int aux){
    if(aux == limit){
        return aux;
    }
    else{
        return aux + addNumbers(limit, aux + 1);
    }
}