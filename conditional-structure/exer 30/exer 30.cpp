#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    float altura,imc;
    string sexo;

    cout << "Informe a sua altura: ";
    cin >> altura;
    cout << "Informe o seu sexo: ";
    cin >> sexo;

    if ((sexo == "M" || sexo == "m")){
        imc = (72.7 * altura) - 58;
        cout << "Seu peso idel será: " << imc;
    } else {
        imc = (62.1 * altura) - 44.7;
        cout << "Seu peso idela será: " << imc;
    }

    cout << endl;

    return 0;
}

/*
30) Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um
algoritmo que calcule e apresente seu peso ideal, utilizando as seguintes fórmulas:
 Para homens: (72,7 * h) – 58;
 Para mulheres: (62,1 * h) – 44,7.
*/