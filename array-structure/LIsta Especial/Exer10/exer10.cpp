#include <iostream>
#include <stdlib.h>

using namespace std;
       
void pegaValores(int cod[], int quanti[], double compra[], double venda[], string nome[]){

    cout << "------------------------------------\n";
    cout << "   <-- Listagem de Produtos -->\n";
    cout << "------------------------------------\n";
    for(int c = 0; c < 2; c++){

        cout << "Digite o código do produto: ";
        cin >> cod[c];
        cout << "Digite o nome do produto " << cod[c] << ": ";
        cin >> nome[c];
        cout << "Digite a quantidade de produtos " << cod[c] << ": "; 
        cin >> quanti[c];
        cout << "Digite o valor de compra do produto " << cod[c] << ": ";
        cin >> compra[c];
        cout << "Digite o valor de venda do produto " << cod[c] << ": ";
        cin >> venda[c];
        cout << "--------------------------------------------\n"; 
    }

}

void mostrarLista(int cod[], int quanti[], double compra[], double venda[], string nome[], int codigo){

    do{
        cout << "\n     <-- MENU -->\n";
        cout << "Digite [0] - para fechar o programa.\n";
        cout << "Digite [1] - para mostrar todos os produtos\n"; 
        cout << "Digite [2] - para mostrar somente um produto desejado\n";
        cout << "Digite o código: ";
        cin >> codigo;

        if(codigo == 0){
            break;
        } else if (codigo == 1){

            cout << "--------------------------------\n";
            cout << "    <-- TODOS OS PRODUTOS -->\n";
            cout << "--------------------------------\n";
            for(int c = 0; c < 2; c++){
                cout << "\nCódigo do produto: " << cod[c];
                cout << "\nNome do produto: " << nome[c];
                cout << "\nQuantidade de produtos: " <<  quanti[c];
                cout << "\nValor de compra do produto: " << compra[c];
                cout << "\nValor de venda do produto: " << venda[c];
                cout << "\n_\n"; 
            }
        } else if (codigo == 2){
            int i;
            cout << "Digite o código do produto: ";
            cin >> i;
            cout << "--------------------------------\n";
            cout << "  <-- Mostrando Produto -->\n";
            cout << "--------------------------------\n";
            cout << "\nCódigo do produto: " << cod[i];
            cout << "\nNome do produto " << nome[i];
            cout << "\nQuantidade de produtos " <<  quanti[i];
            cout << "\nValor de compra do produto " << compra[i];
            cout << "\nValor de venda do produto " << venda[i]; 
        }
    }while(codigo != 0);
}

int main(){

    int cod[2], quanti[2], codigo;
    double compra[2], venda[2];
    string nome[2];

    pegaValores(cod, quanti, compra, venda, nome);

    mostrarLista(cod, quanti, compra, venda, nome, codigo);

    return 0;
}

/*
10) Armazenar código, nome, quantidade, valor de compra e valor de venda de 30
produtos. A listagem pode ser de todos os produtos ou somente de um ao se
digitar o código.
*/