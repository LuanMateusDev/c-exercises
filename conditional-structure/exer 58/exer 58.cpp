#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){

    float a,b,c, delta , x1 ,x2 ;

    cout << "Digite o valor de A: ";
    cin >> a;
    if(a == 0){
        cout << "Não é uma equação de segunda grau.";

    }else{

        cout << "Digite o valor de B: ";
        cin >> b;
        cout << "Digite o valor de C: ";
        cin >> c;

        delta = pow(b,2) - 4 * a * c;
        cout << "\nValor de delta: " << delta << endl;

        if(delta <= 0){
            cout << "Não existe raiz reais.";

        } else {
            x1 = (- b + sqrt(delta)) / (2 * a);
            x2 = (- b - sqrt(delta)) / (2 * a);
            cout << "x1 vale: " << x1 << "\n";
            cout << "x2 vale: " << x2 << "\n";
        }
            
    }
    

    return 0;
}

/*
58) Ler três valores inteiros (variáveis a, b e c) e efetuar o cálculo da equação do
segundo grau, apresentando: as duas raízes, se para os valores informados for
possível fazer o cálculo (delta positivo ou zero); a mensagem “Não há raízes reais”,
se não for possível fazer o cálculo (delta negativo); e a mensagem “Não é equação
do segundo grau”, se o valor de a for igual a zero.

x= −b ± √b − 4ac
        2a
*/