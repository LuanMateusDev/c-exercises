#include <iostream>


using namespace std;


int main(){

    string nome, msg;
    int numero, totN = 0, tot = 0;
    double saldo = 0, saldoTotal = 0;

    for(int c = 1; c <= 10000; c++){

        tot += 1;
        cout << "============================\n";
        cout << "<-- Informe um número ou digite -9999 para terminar o código -->\n";
        cout << "Informe o número da conta: ";
        cin >> numero;
        cin.ignore();
        if(numero == -9999){
            tot -= 1;
            break;
        }
        cout << "Informe o seu nome: ";
        getline(cin, nome);
        cout << "Informe o seu saldo R$: ";
        cin >> saldo;

        saldoTotal += saldo;

        if(saldo < 0){
            msg = "Saldo Negativo.";
            totN += 1;
        } else {
            msg = "Saldo Positivo";
        }

        
        cout << "==============\n";
        cout << "    STATUS \n";
        cout << "==============\n";
        cout << "\nNúmero da conta: " << numero;
        cout << "\nSaldo total da conta[" << numero << "] R$: " << saldo << " / " << msg;
        cout << "\n_\n";
    }
    cout << "\n===================\n";
    cout << "  STATUS DA EMPRESA\n";
    cout << "=====================\n";
    cout << "\nTotal de clientes com o saldo negativo: " << totN;
    cout << "\nTotal de clientes da agência: " << tot;
    cout << "\nSalto total da agência R$: " << saldoTotal; 
    cout << "\n_\n";

    return 0;
}

/*
57) Uma agência de uma cidade do interior tem, no máximo, 10.000 clientes. Criar um algoritmo que
possa entrar com número da conta, nome e saldo de cada cliente. Imprimir todas as contas, os
respectivos saldos e uma das mensagens: positivo/negativo. A digitação acaba quando se digita -
9999 para número da conta ou quando chegar a 10.000. Ao final, deverá sair o total de clientes
com saldo negativo, o total de clientes da agência e o saldo da agência.
*/