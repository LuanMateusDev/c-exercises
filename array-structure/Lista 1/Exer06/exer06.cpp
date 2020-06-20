#include <iostream>

using namespace std;

int main(){

    int c, F[20], G[20];

    for(c = 0; c < 20; c++){
        cout << "-------------------------------------------\n";
        cout << "Digite o " << c + 1 << " valor do vetor F: ";
        cin >> F[c];
        cout << "Digite o " << c + 1 << " valor do vetor G: ";
        cin >> G[c];
    }
    
    cout << "-------------------------------------\n";
    cout << "      <-- General Results -->\n";
    cout << "-------------------------------------\n";
    for(c = 0; c < 20; c++){
        cout << " => " << F[c] << " x " << G[c] << " = " << F[c] * G[c] << "\n";
    }

    return 0;
}

/*
6. Faça um algoritmo que leia dois vetores: F[20] e G[20]. Calcule e mostre, a seguir, o produto dos valores de F por G
*/