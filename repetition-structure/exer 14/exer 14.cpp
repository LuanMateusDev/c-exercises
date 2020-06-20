#include <iostream>

using namespace std;

int main(){

    int  num, maior,menor; 

    cout << "Digite um numero: ";
    cin >> num;
    maior = num;
    menor = num;

   do{  
        if (num > maior){
            maior = num;

        }
        if (num < menor){
            menor = num;
        }
        cout << "Digite um numero: ";
        cin >> num;
       
    } while(num > -1);

    cout << "O maior numero sera: " << maior << " \n";
    cout << "O menor numero sera: " << menor << " \n";

    return 0;
}

/*
14) Achar o maior e o menor número de uma série de números positivos fornecidos (existe pelo menos
1 cartão).
*/