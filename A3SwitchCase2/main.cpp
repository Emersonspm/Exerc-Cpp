#include <iostream>
#include <cctype>

using namespace std;

int main()
{
char sb;

cout << "Escolha um sabor de bolo: " << endl;
cout << "Digite A para escolher bolo de amendoim " << endl;
cout << "Digite C para escolher bolo de chocolate " << endl;
cout << "Digite B para escolher bolo de banana " << endl;
cout << "Digite L para escolher bolo de limao " << endl;
cout << "Digite F para escolher bolo de fuba " << endl;
cin >> sb;
sb = tolower(sb);

switch(sb)
{
    case 'a':
    cout << "o bolo de amendoim custa 14 reais " << endl;
    break;
    case 'c':
    cout << "o bolo de chocolate custa 17 reais " << endl;
    break;
    case 'b':
    cout << "o bolo de banana custa 13 reais " << endl;
    break;
    case 'l':
    cout << "o bolo de limao custa 15 reais " << endl;
    break;
    case 'f':
    cout << "o bolo de fuba custa 12 reais " << endl;
    break;
    default:
        cout << "Opcao invalida " << endl;

}
}
