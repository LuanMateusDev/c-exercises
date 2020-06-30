#include <iostream>
#include <cstdlib>

using namespace std;

void autoPreencher(int v[], int tam){

     for(int i = 0; i < tam; i++){
        v[i] = 1 + rand() % 100;
    }
}

void mostrarVetor(int v[], int tam){
    
    for(int i = 0; i < tam; i++){
        cout <<  v[i] << "\n";
    }
}

bool pesquisar(int v[], int tam, int x){

      for(int i = 0; i < tam; i++){
        if(v[i] == x)
            return true; 
    }

    return false;
}

void ordemCrescente(int v[], int tam){
    
     for(int i = 0; i < tam; i++){
        for(int j = i + 1; j < tam; j++){
            if(v[i] > v[j]){
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main(){

    int vetor[100],tam, num;

    cout << "Digite o tamanho do vetor: ";
    cin >> tam;
    
    autoPreencher(vetor, tam);

    mostrarVetor(vetor, tam);

    cout << "-----------------------------\n";
    cout << "Digite um valor a ser pesquisado: ";
    cin >> num;

    if(pesquisar(vetor, tam, num) == true){
        cout << "O número["<< num << "] existe no vetor => [true]";
    } else if (pesquisar(vetor, tam, num) == false) {
        cout << "O número["<< num << "] não existe no vetor => [false]";
    }

    cout << "\n----------------------\n";
    cout << "<-- ORDEM CRESCENTE -->\n";
    ordemCrescente(vetor, tam);
    mostrarVetor(vetor, tam);

    return 0;
}