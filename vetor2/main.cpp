#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int tamanho = 5;
    float notas[tamanho], media = 0.0;
    int i;
    cout << setprecision(2);

    for (i= 0; i <5; i++)
    {
        cout << "Digite a nota do aluno " << (i+1) <<": " << endl;
        cin >> notas[i];
        media += notas[i];
    }
    cout << "A media das notas e: " << (media/5) << endl;
}
