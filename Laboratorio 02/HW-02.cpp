#include <iostream>//entrada y salida en consola
#include <string>
#include <cmath>
using namespace std;

struct Salesman
{
    int DUI;
    string Name;
    int YearHired;
    float MensualSalary;
};

//Prototipo de funcion de conversion
float YeartoMonths(array[i].YearHired);
//Prototipo de funcion de salario devengado
float accruedIncome(array[i].MensualSalary, int months);

int main(void)
{
    Salesman *array;
    int size;

    cout << "Digite la cantidad de empleados: ";
    cin >> size;
    array = new Salesman[size];

    for (int i = 0; i < size; i++)
    {
        
        cout << "Numero de DUI: ";
        cin >> array[i].DUI;
        cout << "Nombre completo: ";
        cin >> array[i].Name;
        getline(cin, array[i].Name);
        cout << "Año en el que fue contratado: ";
        cin >> array[i].YearHired;
        cout << "Salario mensual: $";
        cin >> array[i].MensualSalary;

cout << endl;
    }

    return 0;
}

//Funcion de conversion
float YeartoMonths(array[i].YearHired){
	for(int i = 0; i < array[i].YearHired; i++){
  int months = array[i].YearHired * 12;             
  }
}

//Funcion de salario devengado   
float accruedIncome(array[i].MensualSalary, int months){
	for(int i = 0; i < array[i].MensualSalary; i++){
  	float Income = array[i].MensualSalary * YeartoMonths;            
    cout << "El salario devengado es: ";
    cin >> Income;
  }                                                                     
}

