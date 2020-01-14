#include <iostream>
using namespace std;

int isAlpha(string word);
int isNumber(int a);
string word;

int main()
{
    isAlpha(word);
    return 0;
}
//
int isAlpha(string word)
{
    //we apliccated the "cout" so that the user can type the word, digits or both at the same time
    cout << "Ingrese una cadena: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        //the isAlpha function declares that if they are only letters it returns to the number "-1"
        if (isalpha(word[i]))
        {
            cout << "-1";
            break;
        }
        //the isdigit function declares that if they are only numbers it returns to the number "1"
        else if (isdigit(word[i]))
        {
            cout << "1";
            break;
        }
        else
        //the isalnum function declares that if the string contains numbers and letters it returns to the number "0"
            (isalnum(word[i]));
        {
            cout << "0";
            break;
        }
    }
    
}

//finish the program