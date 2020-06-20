#include <iostream>

using namespace std;

int main(){

    int c, K[30], aux;

    //Pega valores para o vetor;
    cout << "---------------------\n";
    for(c = 0; c < 30; c++){
        cout << "Digite o " << c + 1 << " valor: ";
        cin >> K[c];
    }

    //Fazer a troca;
    for(c = 0; c < 30; c++){
        if(c != 29){
            if(K[c] % 2 != 0){
                if(K[c + 1] % 2 == 0){
                    aux = K[c + 1];
                    K[c + 1] = K[c];
                    K[c] = aux;
                }      
            }
        }
            
    }

    cout << "----------------------------\n";
    cout << "<--  Changes of Indices  -->\n";
    cout << "----------------------------\n";
    //Mostrar a troca;
     for(c = 0; c < 30; c++){
         cout << "Indice => "<< c << ": " << K[c] << "\n";
    }
    
    return 0;
}

/*
4. Faça um algoritmo que leia um vetor K[30]. Troque a seguir, todos os elementos de ordem ímpar do vetor com os
elementos de ordem par imediatamente posteriores.
*/