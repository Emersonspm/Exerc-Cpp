#include <iostream>

using namespace std;

int main()
{
float m;

cout << "digite a media do aluno ";
cin >> m;

if(m >=0 && m <=10)
{
    cout << "a media e valida " << endl;
    if(m >= 6)
    {
        cout << "o aluno foi aprovado com media " << m << endl;
    }
    else
    {
        cout << "o aluno foi reprovado com media " << m << endl;
    }
}
else
{
    cout << "a media e invalida" << endl;
}
}
