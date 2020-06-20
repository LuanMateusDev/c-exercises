#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string resp = "sim", nome;
    int totnome = 0;

    do{ 
        cout << "Digite um nome: ";
        getline(cin,nome);

        totnome += 1;
        
        if(nome != "FIM"){
        
        cout << "Há mais nomes a serem informados? [sim / não]";
        cin >> resp;
        cin.ignore();
        } else if (nome == "FIM") {
            totnome -= 1;
            resp = "não";
        }

    }while(resp == "sim");

    cout << "----------------------------------\n";
    cout << "          TOTAL DE NOMES          \n";
    cout << "----------------------------------\n";
    cout << "Total de nomes: " << totnome;

    cout << "\n_\n";
    
    return 0;
}

/*
31) Ler nomes do teclado e contar quantos nomes foram lidos para apresentar na tela no final nas
seguintes situações: o algoritmo receberá nomes até que o nome informado seja "FIM". O
algoritmo receberá nomes enquanto a pergunta "Há mais nomes a serem informados?" for
respondida com "sim".
*/
