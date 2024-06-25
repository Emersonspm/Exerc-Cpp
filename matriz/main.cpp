#include <iostream>

using namespace std;

int main()
{
    int matriz[2][3];
    int lin=0, col=0;

    for(lin=0; lin<2; lin++)
    {
        for (col=0; col<3; col++)
        {
            cout << "Digite o valor para a matriz " << lin+1 << " " << col+1 << endl;
            cin >> matriz[lin][col];
        }
    }

    for(lin=0; lin<2; lin++)
    {
        for (col=0; col<3; col++)
        {
            cout << matriz[lin][col] << "  ";

        }
        cout << endl;
    }

}
