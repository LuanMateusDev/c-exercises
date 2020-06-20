#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    float peso, pesop;
    int planeta;
    cout << "Peso da Terra\n";
    cout << "Informe o peso do Planeta Terra: ";
    cin >> pesop;
    cout << "Planeta\n";
    cout << "1 - Mercúrio, 2 - Vênus, 3 - Marte, 4 - Júpiter, 5 - Saturno, 6 - Urano: ";
    cin >> planeta;
     
    cout << "\n_\n";
    if(planeta == 1){
        peso = (pesop  / 10 ) * 0.37;
        cout << "O peso da terra no planeta Mercúrio será: " << peso; 
    } else if (planeta == 2){
        peso = (pesop  / 10 ) * 0.88;
        cout << "O peso da terra no planeta Vênus será: " << peso; 
    } else if (planeta == 3){
        peso = (pesop  / 10 ) * 0.38;
        cout << "O peso da terra no planeta Marte será: " << peso; 
    } else if (planeta == 4){
        peso = (pesop  / 10 ) * 2.64;
        cout << "O peso da terra no planeta Júpiter será: " << peso;
    }else if (planeta == 5){
        peso = (pesop  / 10 ) * 1.15;
        cout << "O peso da terra no planeta Saturno será: " << peso;
    }else if (planeta == 6){
        peso = (pesop  / 10 ) * 1.17;
        cout << "O peso da terra no planeta Urano será: " << peso;
    }

    cout << endl;
    return 0;
}

/*
Escrever um algoritmo que leia um peso da Terra e o número de um planeta e
imprima o valor do seu peso neste planeta. A relação de planetas é dada a seguir
juntamente com o valor das gravidades relativas à Terra:
*/