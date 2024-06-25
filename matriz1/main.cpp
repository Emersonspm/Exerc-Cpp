#include <iostream>

using namespace std;

int main()
{
    int m;
    int lin=0, col=0;

    cout << "Digite o tamanho da matriz quadrada " << endl;
    cin >> m;

    int matriz[m][m];

    for(lin=0; lin<m; lin++)
    {
        for (col=0; col<m; col++)
        {
            cout << "Digite o valor para a matriz " << lin+1 << " " << col+1 << endl;
            cin >> matriz[lin][col];
        }
    }

    for(lin=0; lin<m; lin++)
    {
        for (col=0; col<m; col++)
        {
            if(lin != col)
            {
                cout << matriz[lin][col] << "  ";
            }


        }
        cout << endl;
    }

}
