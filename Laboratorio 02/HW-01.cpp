//Entrada y salida en consola
#include <iostream>
//permite el usar los strings
#include <string>
using namespace std;

//se declara el registro
struct DataOfThePerson
{
    string name;
    float salary;
    int age;
    int WorkingYears;
};

//prototipo de la funcion para mostrar la informacion
void printInfo(struct DataOfThePerson printData);
//prototipo de la funcion para verificar la jubilacion
bool retirement(int age, int work);

//inicio del programa
int main()
{
    //se declara la variable de tipo DataOfThePerson del registro
    DataOfThePerson Data1;

    cout << "Nombre: ";
    cin >> Data1.name;
    getline(cin, Data1.name);
    cout << "Salario: $";
    cin >> Data1.salary;
    cout << "Edad: ";
    cin >> Data1.age;
    cout << "Años Laborando: ";
    cin >> Data1.WorkingYears;
    cout << endl;

//ponemos la funcion para que muestre la informacion 
    printInfo(Data1);

if(retirement(Data1.age, Data1.WorkingYears) == true){
    cout << "Esta  persona puede jubilarse" << endl;
}
else{
    cout << "Esta persona aun no se puede jubilar" << endl;
}

//se acaba el programa
    return 0;
}

//la definicion de la funcion para mostrar la informacion
void printInfo(struct DataOfThePerson printData)
{
    cout << " Nombre:  " << printData.name << endl;
    cout << " Salario: $" << printData.salary << endl;
    cout << " Edad: " << printData.age << endl;
    cout << " Años Laborando: " << printData.WorkingYears << endl;
    cout << endl;
}

//la definicion de la funcion para verificar la jubilacion
bool retirement(int age, int work){
    bool flag = false;
    if(age >= 60){
        flag = true; //si la condicion cumple de que la persona tenga mas o igual a 60 años esta puede jubilarse
    }
    return flag;
    if(work >= 25){
        flag = true; //si la condicion cumple de que la persona tenga mas o igual a 25 años laborales esta puede jubilarse
    }
    return flag;
}
