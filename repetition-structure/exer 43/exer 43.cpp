#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string nome, resp = "S";
    float preco, venda, lucro, lucrototal = 0,totcompra = 0, totvenda = 0, 
    contmerca1 = 0,contmerca2 = 0,contmerca3 = 0,contmerca4 = 0, porcentagem1 = 0, porcentagem2 = 0;

    while(resp == "Sim" || resp == "S" || resp =="s"){

        cout << "Digite o nome da mercadoria: ";
        cin >> nome;
        cout << "Digite o preço de uma mercadoria do fornecedor: ";
        cin >> preco;
        cout << "Digite o preço da venda do produto no comércio: ";
        cin >> venda;

        totcompra+= preco;
        totvenda += venda;
        lucro = venda - preco;
        lucrototal += lucro;
        porcentagem1 = (10 * lucro) / 100; 
        porcentagem2 = (20 * lucro) / 100;

        if(lucro <= porcentagem1){
            contmerca1 += 1;
        } else if(lucro < porcentagem1){
            contmerca2 += 1;
        } else if(lucro < porcentagem2){
            contmerca3 += 1;
        } else if(lucro > porcentagem2){
            contmerca4 += 1;
        }
        
        cout << "Deseja analisar outra mercadoria? [Sim/Não]: ";
        cin >> resp;
    }

    cout << "=========================\n";
    cout << "   Resultado da Análise  \n";
    cout << "=========================\n";
    cout << "\nQuantidade de mercadorias que proporcionam igual ou mais de 10% de lucro: " << contmerca1;
    cout << "\nQuantidade de mercadorias que proporcionam menos de 10% de lucro: " << contmerca2;
    cout << "\nQuantidade de mercadorias que proporcionam menos de 20% de lucro: " << contmerca3;
    cout << "\nQuantidade de mercadorias que proporcionam mais de 20% de lucro: " << contmerca4;
    cout << "\nValor total de compra por unidade de mercadoria: " << totcompra;
    cout << "\nValor total de venda por unidade de mercadoria: " << totvenda;
    cout << "\nLucro total por unidades de mercadorias: " << lucrototal << endl;

    return 0;
}

/*
43) Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para
isto, mandou digitar uma linha para cada mercadoria com o nome, preço de compra e preço de
venda das mesmas. Fazer um algoritmo que:

Determine e escreva quantas mercadorias proporcionam:
lucro < 10%
10% >=
lucro < 20%
lucro > 20%7

Determine e escreva o valor total de compra e de venda de todas as mercadorias,
assim como o lucro total.
Observação: o aluno deve adotar um flag.
*/