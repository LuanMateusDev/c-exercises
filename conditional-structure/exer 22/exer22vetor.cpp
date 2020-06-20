#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    int i, maior, menor, num[5];

    for(i = 0; i < 5; i++){
        cout << "Digite um número: ";
        cin >> num[i];
        maior = num[0];
        menor = num[0];
    }

        if(num[1] < menor){
            menor = num[1];
        }
        else{
            maior = num[1];
        }
        if(num[2] < menor){
            menor = num[2];
        }
        else{
            maior = num[2];
        }
        if(num[3] < menor){
            menor = num[3];
        }
        else{
            maior = num[3];
        }
        if(num[4] < menor){
            menor = num[4];
        }
        else{
            maior = num[4];
        }
        cout << "O maior número é: " << maior << endl;
        cout << "O menor número é: " << menor << endl;
        return 0;
}