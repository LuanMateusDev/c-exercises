#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){

    string nome, resp = "Sim";
    float edit, pag,quanti, preco, custo,lucro, total;

    while(resp == "Sim"){
        
        cout << "Qual é o nome do livro: ";
        cin >> nome;
        cout << "Quanto custa uma página editada: ";
        cin >> edit;
        cout << "Quantas páginas o livro possuí: ";
        cin >> pag;
        cout << "Quanto custa um livro: ";
        cin >> preco;
        cout << "Qual é a previsão de vendas em quantidade de livros: ";
        cin >> quanti;
       
        custo = (pag * edit) * quanti;
        lucro = preco - (pag * edit);
        total = (quanti * preco) - custo;

        cout << "\n_\n";
        cout << "-----------------------------\n";
        cout << "    RESULTADO DA ANÁLISE     \n";
        cout << "------------------------------\n";
        cout << "Total de livros vendidos: " << quanti;
        cout << "\nTotal de páginas: "  << pag;
        cout << "\nCusto de edição de uma página: " << edit;
        cout << "\nCusto de um livro: " << preco;
        cout << "\nLucro obtido por um livro levando em consideração as informações acima: " << lucro;
        cout << "\nCusto total: " << custo;
        cout << "\nLucro total: " << total;
        cout << "\n_\n";
        cout << "Deseja análisar outro livro? [Sim / Não]: ";
        cin >> resp;
    }

    return 0;
}

/*
33) Faça um diagrama para resolver o seguinte: Uma editora precisa saber qual a previsão de média
de lucros que terá com os lançamentos de cada um dos livros no próximo mês. Para tanto deve
ser informado ao algoritmo o custo de uma página editada e, a partir daí, o nome do livro, quantas
páginas ele possui, qual a previsão de venda em quantidade de livros e qual o preço de venda do
livro. A partir daí para cada livro, calcule qual será o lucro com cada livro.
*/