#include <iostream>

using namespace std;

int main(void){

    int vetorW[10], vetor[10] = {1,2,3,4,5,6,7,8,9,10};

   
    for(int c = 0; c < 10; c++){

        int fat = 1, num = vetor[c];

        for(int i = 1; i <= num; i++){
            fat *= i;
        }

        vetorW[c] = fat;
        cout << "O vetor [" << c + 1 << "] - " << vetor[c] << "\n";
        cout << "Vetor Fatorial = " << vetorW[c] << "\n";

    }



    return 0;
}

/*
11) Ler um vetor de 10 elementos e obter um vetor W cujos componentes são os
fatoriais dos respectivos componentes de W.
*/