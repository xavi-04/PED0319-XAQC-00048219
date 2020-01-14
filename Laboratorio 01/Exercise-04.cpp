#include <iostream> //correspondig input and output of data
#include <cstdlib>//it takes for the "rand" variable to work
#include <time.h>//it takes for the "rand" variable to work
using namespace std;

//random number array function
int showRandArray(int arr[15], int size);
//function to show multiples of 7
void showMultiples(int arr[15]);
//function that adds the multiples of 7
void showSuma(int arr[15]);

//global variables are declared
int size = 15;
int arr[15];

//Here starts the program
int main(){
    showRandArray(arr, size);
    cout<<endl;

    showSuma(arr);
    cout<<endl;

    return 0;
}



//the array fuction definition
int showRandArray(int arr[15], int size ){
    cout<< "Los elemetos del arreglo son los siguientes: " << endl;
    for(int i = 0; i < size; i++){
        arr[i] = i + rand() % 75;
        cout << arr[i]<< endl;
    }
}


//the definition of the multiples function
void showMultiples(int arr[15]){
    cout << "Los multiplos de 7 del arreglo son: " <<endl;
    for(int i = 0; i< 15; i++){
        if(arr[i] % 7 == 0){
            cout <<arr[i] << " ";
        }
    }
}


//the definition of the add function
void showSum(int arr[15]){
    int suma = 0;
    for(int i = 0; i< 15; i++){
        if(arr[i] % 7 == 0){
            suma += arr[i];
        }
    }
    cout << "La suma de los multiplos de 7 del arreglo es la siguiente: " << suma << endl;
}
