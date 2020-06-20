#include <iostream>

using namespace std;

int main(){

    int  mercC[3],  mercV[3],  lucro,  tot[3] = {0, 0, 0};
    double porc;

    cout << "-----------------------------------\n";
    cout << "    <-- INFORME OS VALORES -->\n";
    cout << "-----------------------------------\n";
        for(int c = 0; c < 3; c++){
        cout << "Digite o preço de compra do produto " << c + 1 << " :";
        cin >> mercC[c];
        cout << "Digite o preço de venda do produto " << c + 1 << " :";
        cin >> mercV[c];

        lucro = mercV[c] - mercC[c];
        cout << lucro << "\n";

        porc = (lucro * 100) / mercC[c];
        cout << porc << "\n";

        if(porc < 10){
             tot[0] += 1;
             cout << tot[0] << "\n\n\n";
        }
        if(porc >= 10 && porc <= 20){
             tot[1] += 1;
            cout << tot[1] << "\n"; 
        }
        if(porc > 20){ 
             tot[2] +=  1;
            cout << tot[2] << "\n";
        } 
            
    }
    cout << "-------------------------------------------------------\n";
    cout << "                  <-- RESULTADOS -->\n";
    cout << "-------------------------------------------------------";
    cout << "\nTotal de mercadorias com lucro menor que 10%: " << tot[0];
    cout << "\nTotal de mercadorias com lucro entre 10 e 20%: " << tot[1];
    cout << "\nTotal de mercadorias com lucro maior que 20%: " << tot[2];

     return 0;
}

/*
7) Criar um programa que leia o preço de compras e o preço da venda de 100
mercadorias. O programa deverá imprimir quantas mercadorias proporcionam:
 Lucro < 10%
 10% <= lucro <= 20%
 Lucro > 20%
*/