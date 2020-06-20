#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){

    string nome;
    float altura, peso, imc;


    cout << "Informe o seu nome: ";
    getline(cin, nome);
    cout << "Informe o seu peso em KG: ";
    cin >> peso;
    cout << "Informe a sua altura em metros: ";
    cin >> altura;

    imc = peso / pow(altura,2);
    cout << "======================\n";
    cout << "        STATUS\n";
    cout << "======================\n";
    if (imc < 20){
        cout << "Abaixo do peso.";
    } else if (imc >= 20 && imc <= 25){
        cout << "Normal.";
    } else if (imc >= 30 && imc <= 35){
        cout << "Obesidade.";
    } else if (imc > 35){
        cout << "Obesidade mórbida.";
    } 
    cout << endl;


    return 0;
}

/*

*/