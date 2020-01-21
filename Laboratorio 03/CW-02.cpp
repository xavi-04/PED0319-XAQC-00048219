#include <iostream>
#include <string>
using namespace std;

struct address
{
    int houseNumber;
    string city, state;
};

struct personalInfo
{
    string name;
    int age;
    address pAddress;
};

void printInfo(personalInfo* p1, int size, int pos);

int main(void)
{
    personalInfo *pData;
    int size = 0;
    cout << "cantidad de datos a ingresar: ";
    cin >> size;

    pData = new personalInfo[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Nombre: ";
        cin >> pData[i].name;
        cout << "Edad: ";
        cin >> (pData + i)->age;
        cout << "No. Casa: ";
        cin >> pData[i].pAddress.houseNumber;
        cout << "Ciudad: ";
        cin >> (pData + i)->pAddress.city;
        cout << "Estado: ";
        cin >> (pData + i)->pAddress.state;
        cout << endl;
    }

    printInfo(pData, size, 0);

    return 0;
}

void printInfo(personalInfo* p1, int size, int pos){
    if(pos == size){
        return;
    }
    else{
        printInfo(p1, size, pos +1);

        cout << " Nombre:\t" << p1[pos].name << endl;
        cout << " Edad:\t" << p1[pos].age << endl;
        cout << " No. casa:\t" << p1[pos].pAddress.houseNumber << endl;
        cout << " Ciudad:\t" << p1[pos].pAddress.city << endl;
        cout << " Estado:\t" <<p1[pos].pAddress.state << endl;

    }
}
