#include <iostream>
using namespace std;

int main (){
    
    int i, divisao, valor;

    cout << "Digite um valor: ";
    cin >> valor;

    for (i=0; i<=valor; i++){
        if (i%4 == 0)
        cout << "\n" << i << endl;

    }

return 0;
}



//5) Apresentar todos os números divisíveis por 4 até o número recebido pelo teclado.