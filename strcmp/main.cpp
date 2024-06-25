#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char palavra1[20], palavra2[20];

    cout << "Digite uma palavra1: " << endl;
    cin >> palavra1;
    cout << "Digite uma palavra2: " << endl;
    cin >> palavra2;

    if (strcmp(palavra1, palavra2)==0)
    {
        cout << "As palavras sao iguais " << endl;
    }
    else
    {
        cout << "As palavras sao diferentes " << endl;
    }
}

