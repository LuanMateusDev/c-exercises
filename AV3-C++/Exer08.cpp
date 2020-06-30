#include <iostream>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    int vetor[5], aux;

    //Pegando os 5 valores interios para o vetor;
    for(int c = 0; c < 5; c++) {
       vetor[c] = rand() % 100;
    }

    //Ordenando o vetor e mostrando ele de forma crescente;
    cout << "--------------------------------\n";
    cout << " <-- Vetor em ordem crescente -->\n";
    cout << "--------------------------------\n";
    for(int c = 0; c < 5; c++) {
        for(int l = c + 1; l < 5; l++){
            if(vetor[c] > vetor[l]) {
            aux = vetor[c];
            vetor[c] = vetor[l];
            vetor[l] = aux;
        }
        }
        cout << vetor[c] << "\n";
    }

    return 0;
}