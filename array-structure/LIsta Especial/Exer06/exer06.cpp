#include <iostream>

using namespace std;

int main(void){

    float salario[20];
    string nome[20];

    for(int c = 0; c < 2; c++){
        cout << "Digite o " << c << " nome: ";
        getline(cin, nome[c]);
        salario[c] = 1 + rand() % 1000;

        cout << "Salário de " << nome[c] << " será R$: " << salario[c] << "\n";
        salario[c] *= 1.08; 
    }

    for(int c = 0; c < 2; c++){
        cout << "O salário de " << nome[c] << " vai ser: " << salario[c] << "\n";
    }
    
    return 0;

}

/*
6) Armazenar nome e salário de 20 pessoas. Calcular e armazenar o novo salário
sabendo-se que o reajuste foi de 8%. Imprimir uma listagem numerada com
nome e novo salário.
*/