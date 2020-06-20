#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    float saldom,credito;

    cout << "Informe o saldo médio: ";
    cin >> saldom;

    if(saldom >0 && saldom <= 500){
        cout << "\nSaldo médio: " << saldom << "R$";
        cout << "\nNenhum Crédito.";
    } else if (saldom >= 501 && saldom <= 1000){
        cout << "\nSaldo médio: " << saldom << "R$";
        saldom = (30 * saldom) / 100;
        cout << "\nValor de crédito de 30%: " << saldom << "R$";
    } else if (saldom >= 1001 && saldom <= 3000){
        cout << "\nSaldo médio: " << saldom << "R$";
        saldom = (40 * saldom) / 100;
        cout << "\nValor de crédito de 40%: " << saldom << "R$";  
    } else if (saldom > 3001){
        cout << "\nSaldo médio: " << saldom << "R$";
        saldom = (50 * saldom) / 100;
        cout << "\nValor de crédito de 50%: " << saldom << "R$";
    }

    cout << endl;




    return 0;
}

/*


De 0 a 500
De 501 a 1000
De 1001 a 3000
Acima de 3001


Nenhum crédito
30% do valor do saldo médio
40% do valor do saldo médio
50% do valor do saldo médio

*/