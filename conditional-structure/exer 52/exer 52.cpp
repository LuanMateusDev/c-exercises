#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string produto;
    int preco;
    float porcem;


    cout << "Digite o nome do produto: ";
    cin >> produto;
    cout << "Digite o valor de compra: ";
    cin >> preco;

    if (preco < 10){
        porcem = (70 * preco) / 100;
        preco += porcem;
        cout << "\nNome do produto: " << produto;
        cout << "\nLucro de 70%: R$: " << porcem;
        cout << "\nValor da venda: R$: " << preco;
    } else if (preco >= 10 && preco <= 30){
        porcem = (50 * preco) / 100;
        preco += porcem;
        cout << "\nNome do produto: " << produto;
        cout << "\nLucro de 50%: R$: " << porcem;
        cout << "\nValor da venda: R$: " << preco;
    } else if (preco >= 30 && preco <= 50){
        porcem = (40 * preco) / 100;
        preco += porcem;
        cout << "\nNome do produto: " << produto;
        cout << "\nLucro de 40%: R$: " << porcem;
        cout << "\nValor da venda: R$: " << preco;
    } else if (preco > 50){
        porcem = (30 * preco) / 100;
        preco += porcem;
        cout << "\nNome do produto: " << produto;
        cout << "\nLucro de 30%: R$: " << porcem;
        cout << "\nValor da venda: R$: " << preco;
    } else {
        cout << "\n[ERROR]";
    }

    cout << endl;


    return 0;
}

/*
Um comerciante calcula o valor da venda, tendo em vista a tabela a seguir. Criar o
algoritmo que possa entrar com o nome do produto e valor da compra e imprimir o
nome do produto e o valor da venda.
*/