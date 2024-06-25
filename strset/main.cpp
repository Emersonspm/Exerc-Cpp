#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char palavra[20];
    cout << "Exemplo que substiu caracter por uma palavra" << endl;
    cout << "Digite uma palavra: " << endl;
    cin >> palavra;
    cout << "Substiuido " << strset(palavra,'*');
    cout << palavra;
}
