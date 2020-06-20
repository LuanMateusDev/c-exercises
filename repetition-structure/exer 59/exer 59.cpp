#include <iostream>

using namespace std;

int main(){

    int pedido = 1,precouni, quanti;
    string data;

    while(pedido != 0){

    cout << "Número do pedido: ";
    cin >> pedido;
    if(pedido == 0){
        break;
    }
    cout << "Data do pedido: ";
    cin >> data;
    cout << "Preço unitário: ";
    cin >> precouni;
    cout << "Quantidade: ";
    cin >> quanti;

}
    return 0;

}


/*
59) Criar um algoritmo que possa ler um conjunto de pedidos de compra e calcule o valor total da
compra. Cada pedido é composto pelos seguintes campos:
 Número de pedido
 Data do pedido (dia, mês e ano)
 Preço unitário
 Quantidade
O algoritmo deverá processar novos pedidos até que o usuário digite 0 (zero) como número do
pedido.
*/