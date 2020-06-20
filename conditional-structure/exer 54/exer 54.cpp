#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string nome;
    int compra;
    float porcem;

    cout << "Informe quantas pessoas estão com você: ";
    cin >> nome;
    cout << "Valor em compras: ";
    cin >> compra;

    if (compra >= 150 && compra <= 300){
        porcem = (10 * compra) / 100;
        cout << "\nValor gasto: R$" << compra;    
        cout << "\nDesconto de 10%: R$" << porcem;
        cout << "\nPreço descontado: R$" << compra - porcem; 
    } else if (compra > 300 && compra <= 500){
        porcem = (15 * compra) / 100;
        cout << "\nValor gasto: R$" << compra;
        cout << "\nDesconto de 15%: R$" << porcem;
        cout << "\nPreço descontado: R$" << compra - porcem; 
    } else if (compra > 500){
        porcem = (18 * compra) / 100;
        cout << "\nValor gasto: R$" << compra;
        cout << "\nDesconto de 15%: R$" << porcem;
        cout << "\nPreço descontado: R$" << compra - porcem;
    }else {
        cout << "Sem Desconto.";
    }

    
    cout << endl;






    return 0;
}

/*


*/