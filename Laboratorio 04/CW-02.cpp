#include <iostream>
#include <string>
using namespace std;

struct dataStudent{
    string name, report;
    float grade;
};

void fillArray(dataStudent *array, int size, int aux);
 void printArray(dataStudent * array, int size, int aux);
    
int main(void){
    int size = 0;
    cin >> size;

    dataStudent* students;
    students = new dataStudent[size];

    fillArray(students, size, 0);
    printArray(students, size, 0);

    return 0;
}

void fillArray(dataStudent *array, int size, int aux)
{
    if (size == aux)
    return;
    else
    {
        cout << "Nombre: ";
        getline(cin, array[aux].name);
        cin.ignore();
        cout << "COmentarios: ";
        getline(cin, array[aux].report);
        cin.ignore();
        cout << "Nota: ";
        cin.ignore();

        printArray(array, size, aux + 1);
    }
}
    void printArray(dataStudent * array, int size, int aux)
    {
        if (size == aux)
        return;
        else{
        cout << "Nombre: " << array[aux].name << endl;
        cout << "COmentarios: " << array[aux].report << endl;
        cout << "Nota: " << array[aux].grade << endl;
        cin.ignore();

        printArray(array, size, aux + 1);
    }

}
