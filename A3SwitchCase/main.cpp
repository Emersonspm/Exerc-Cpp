#include <iostream>

using namespace std;

int main()
{
int p;

cout << "escolha um prato: " << endl << endl;
cout << "digite 1 para prato do dia " << endl;
cout << "digite 2 para lasanha " << endl;
cout << "digite 3 para picanha " << endl;
cout << "digite 4 para salada " << endl;

cin >> p;

switch(p)
{
    case 1:
    cout << "prato do dia: 17 reais" << endl;
    break;
     case 2:
    cout << "lasanha: 15 reais" << endl;
    break;
     case 3:
    cout << "picanha: 21 reais" << endl;
    break;
     case 4:
    cout << "salada: 7 reais" << endl;
    break;
     default:
        cout << " Opcao invalida " << endl;
}
}
