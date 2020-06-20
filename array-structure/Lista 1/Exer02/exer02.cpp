#include <iostream>

using namespace std;

int main(){


    int c, N[20], pegaM, pegaP;

    for(c = 0; c < 20; c++){

        cout << "Digite o " << c + 1 << " valor: ";
        cin >> N[c];

        //Inicializa o menor valor
        if(c == 0)
            pegaM = N[c];
        //===
        //Pega os valores pedidos
        if(N[c] < pegaM){
            pegaM = N[c];
            pegaP = c;
        }
        //===

    }
    cout << "------------------------\n";
    cout << "<-- General Result -->\n";
    cout << "------------------------\n";
    cout << "O menor elemento de N é " << pegaM << " e sua posição dentro do vetor é: " << pegaP; 
    cout << "\n\n";

    return 0;
}

/*
2. Faça um algoritmo que leia um vetor N[20]. A seguir, encontre o menor elemento do vetor N e a sua posição dentro
do vetor, mostrando: “O menor elemento de N é”, M, “e sua posição dentro do vetor é:”,P.
*/