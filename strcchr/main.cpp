#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char texto[]="Testeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeees" << endl;
    char *ptr;
    cout << "Procurando por 's' no texto: \n \n  " << texto << endl << endl;
    ptr=strchr(texto,'s');
//ptr=strrchr(texto,'s');
//para encontrar a ultima vez

    if(*ptr)
    {
        cout << "A letra 's' apareceu a primeira vez na posição: " << ptr-texto+1 << endl;
    }
    else
    {
        cout << "Letra nao encontrada " << endl;
    }
}
