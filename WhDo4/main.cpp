#include <iostream>

using namespace std;

int main()
{
int n, c = 0, q = 0;


do
{
    cout << "Digite um numero ";
    cin >> n;
    q = (q + 1);
if (n == 0)
    {
    c = (c + 1);
    cout << "foram digitados " << (q-1) << " numeros" << endl;

    }
}
while(c < 1);


}
