#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char palavra1[20], palavra2[20];

    cout << "Digite uma palavra1: " << endl;
    cin >> palavra1;
    cout << "Digite uma palavra2: " << endl;
    cin >> palavra2;
    cout << "Unindo palavra 1 e palavra 2 temos " << strcat(palavra2,palavra1) << endl;
}
