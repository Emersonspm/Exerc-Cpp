#include <iostream>
#define DIM 5

using namespace std;

int main()
{

int vetor[DIM] = {10, 15, 20, 25, 30};
int vetor1[] ={10,20,30,40,509,-1};
int i;

cout << "Vetor com tamanho p´re definido com define \n";
for (i=0; i<DIM; i++){
    cout << "Vetor na posição " << i << " = " << vetor[i] << endl;
}
     cout << "\n \n Vetor terminado por -1 \n ";
     for (i=0; vetor1[i]> 0; i++){
        cout << "Vetor na posicao " << i << " + " << vetor1[i] << endl;
     }
}
