#include <iostream>
#include <cstring>
#define naluno 3
using namespace std;

int main()
{

    struct estruturaAluno
    {
        char nome[60];
        char matricula[10];
        int anoingresso;

    } strAluno[naluno];

    int i;
    for(i=0; i<naluno; i++)
    {
        cout << "Digite o nome do aluno: " << endl;
        cin.getline(strAluno[i].nome, 60);
        cout << "Digite a matricula: " << endl;
        cin.getline(strAluno[i].matricula, 10);
        cout << "Digite o ano de ingresso: " << endl;
        cin >> strAluno[i].anoingresso;
        cout << endl;
        fflush(stdin);

    }

    cout << "Alunos cadastrados com sucesso \n" << endl;
    for(i=0; i<naluno; i++)
    {
        cout << "O nome do aluno é: " << strAluno[i].nome << endl;
        cout << "A matricula do aluno é: " << strAluno[i].matricula << endl;
        cout << "O ano de ingresso do aluno é: " << strAluno[i].anoingresso << endl << endl;
    }

}
