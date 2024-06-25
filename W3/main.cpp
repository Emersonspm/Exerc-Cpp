#include <iostream>

using namespace std;

int main()
{

int c=1, n;

cout << "digite um numero ";
cin >> n;
cout << "os 10 antecessores de " << n << " sao " << endl;

do {
    cout << n - c << endl;
    c = c + 1;
}while (c <= 10);

}
