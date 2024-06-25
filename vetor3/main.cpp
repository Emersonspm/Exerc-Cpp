#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int tamanho = 5;
    float notas[tamanho], media = 0.0;
    int i=0, j;
    cout << setprecision(2);

    do
    {
        if(i>=tamanho)
        {
            cout << "Buffer lotado " << endl;
            i++;
            break;
        }
        cout << "Digite a nota do aluno " << (i+1) <<": " << endl;
        cin >> notas[i];
    }
    while(notas[i++] >= 0);

    i--;
    for(j = 0; j <i; j++)
    {

        media += notas[j];
    }
    cout << "A media das notas e: " << (media/i) << endl;
}
