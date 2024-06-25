#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int i;
for ( i=10; i < 10; i--)
    cout << setw(5) << i << setw(5) << " x 6 = " << setw(5) << i*6 << endl;

}
