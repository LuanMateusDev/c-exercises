#include <iostream>
#include <stdlib.h>

using namespace std;

main (){
   
    int dest, passa;
    
    cout << "Destino\n";
    cout << "1 - Região Norte, 2 - Região Nordeste, 3 - Região Centro-Oeste, 4 - Região Sul: ";
    cin >> dest;
    cout << "Passagem\n";
    cout << "1 - Só de ida, 2 - Ida e Volta: ";
    cin >> passa;

    if(dest == 1){
        if(passa == 1){
            cout << "\nDestido: Região Norte";
            cout << "\nPassagem: R$500,00";
        } else {
            cout << "\nDestido: Região Norte";
            cout << "\nPassagem: R$900,00";
        }

    }
    if (dest == 2){
        if(passa == 1){
            cout << "\nDestido: Região Nordeste";
            cout << "\nPassagem: R$350,00";
        } else {
            cout << "\nDestido: Região Nordeste";
            cout << "\nPassagem: R$650,00";
        }
    }
    if(dest == 3){
        if(passa == 1){
            cout << "\nDestido: Região Centro-Oeste";
            cout << "\nPassagem: R$350,00";
        } else {
            cout << "\nDestido: Região Centro-Oeste";
            cout << "\nPassagem: R$600,00";
        }
    }
    if(dest == 4){
        if(passa == 1){
            cout << "\nDestido: Região Sul";
            cout << "\nPassagem: R$300,00";
        } else {
            cout << "\nDestido: Região Sul";
            cout << "\nPassagem: R$550,00";
        }
    }
    cout << endl;

    return 0;
}