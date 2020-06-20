#include <iostream>

using namespace std;

int main(){

    int num, c, soma=0, produto=1, quanti=0;

    cout << "Quantos números você quer digitar: ";
    cin >> quanti;

   for(c = 1; c <= quanti ; c++){

       cout << "Digite o " << c << " valor: ";
       cin >> num;

       if(num % 2 == 1){
           produto *= num;
        } else if (num % 2 == 0){
            soma += num;
        }

   }

   cout << "==============\n";
   cout << "   RESULTADO  \n";
   cout << "===============\n";
   cout << "\nProduto dos números ímpares: " << produto;
   cout << "\nSoma dos números pares: " << soma;
   cout << endl;

    return 0;


}

/*
58) Criar um algoritmo que entre com vários números inteiros positivos e imprima o produto dos
números ímpares digitados e a soma dos pares.
*/