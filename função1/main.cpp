#include <iostream>

using namespace std;

void cumprimenta(char i1, char i2)
{
    cout << "Ola, "<< i1 << i2 << endl;
}

int main()
{
    char inicial1, inicial2;

    cout << "Digite suas 2 iniciais: ";
    cin >> inicial1 >> inicial2;
    cumprimenta(inicial1,inicial2);

}
