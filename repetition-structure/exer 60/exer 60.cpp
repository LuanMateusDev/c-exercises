#include <iostream>


using namespace std;

int main(){

    string nome, resp;
    int numero, tot, acumula = 0;

    while(resp != "Não"){

        cout << "<-- TABELA DE INFORMAÇÕES -->\n";
        cout << "Digite o número da conta: ";
        cin >> numero;
        cout << "Informe o seu nome: ";
        cin.ignore();
        getline(cin, nome);
        cout << "Total de dias ficado na pousada: ";
        cin >> tot;
            
        if(tot > 10){
            tot = (tot * 30) + 15;
        } else {
            tot = (tot * 30) + 8;
        }

        acumula += tot;

        cout << "===============\n";
        cout << "    STATUS\n";
        cout << "===============\n";
        cout << "\nNome: " << nome;
        cout << "\nNúmero da conta: " << numero;
        cout << "\nConta R$: " << tot;

        cout << "\nDeseja continuar? [Sim / Não]: ";
        cin >> resp;
        
    }


        cout << "=============\n";
        cout << "   GANHOS\n";
        cout << "=============\n";
        cout << "Ganho total da pousada R$: " << acumula << "\n";
        cout << "========================================\n";

    return 0;
}

/*
60) Uma pousada estipulou o preço para a sua diária em R$ 30,00 e mais uma taxa de serviços diários
de:

R$ 15,00, se o número de dias for maior que 1012

R$ 8,00, se o número de dias for menor ou igual a 10
Criar um algoritmo que imprima nome, conta e o número da conta de cada cliente e ao final o
total ganho pela pousada.
*/