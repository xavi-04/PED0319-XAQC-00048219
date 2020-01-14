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
    cout << "Ingrese una cadena: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        //
        if (isalpha(word[i]))
        {
            cout << "-1";
            break;
        }
        //
        else if (isdigit(word[i]))
        {
            cout << "1";
            break;
        }
        else
        //
            (isalnum(word[i]));
        {
            cout << "0";
            break;
        }
    }
}