#include <iostream>

using namespace std;


int main(){

    string resp = "S";
    double balancom=0, valort=0,quantit=0, taxa=0, tot=0;
    int numero, codigot; 

    while(resp == "S" || resp == "s"){
        cout << "Balanço Total inicial R$: ";
        cin >> tot;
        cout << "Valor do balanço mínimo diário R$: ";
        cin >> balancom;
        cout << "Quantidade de transação: ";
        cin >> quantit;
        cout << "Taxa de serviço R$: ";
        cin >> taxa;
        cout << "Número da conta: ";
        cin >> numero;

       for(int c = 1; c <= quantit; c++){
           cout << "\n=======================\n";
            cout << "          MENU \n";
            cout << "=======================\n";
            cout << "Valor de transação R$: ";
            cin >> valort;
            cout << "Código de transação\n";
            cout << "1 - Depósito, 2 - Retirada.\n";
            cout << "Código: ";
            cin >> codigot;

            if(tot < balancom){
                tot -= taxa;
            }

            if(codigot == 1){
                tot += valort;
                cout << "Depósitado R$: " << valort;
            } else if(codigot == 2){
                if(tot < valort){

                    cout << "\nNão há Fundos.";
                    cout << "===================\n";
                } else {
                    tot -= valort;
                     cout << "Saquado R$: " << valort;

                }
            }

       }
       cout << "\n";
       cout << "\n==================\n";
       cout << "        STATUS  \n";
       cout << "===================\n";
       cout << "\nNúmero da conta: " << numero; 
       cout << "\nBalanço Total R$: " << tot;
       cout << "\n\n";
       cout << "Deseja fazer outras transações: ";
       cin >> resp;

    }


    return 0;
}