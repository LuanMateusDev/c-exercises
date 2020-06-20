#include <iostream>
#include <stdlib.h>

// 42


using namespace std;

int main(){

     float i, idade, peso, pesoM =0,mediaP=0;



    for (i = 1 ; i <= 2; i++){

        cout << "Coloque a sua idade: ";
        cin >> idade;
        cout << "Coloque o peso: ";
        cin >> peso;

        pesoM = pesoM + peso;

        //if ((idade 1 >= 10) || (idade 11 >= 20) || (idade 21 > 30)){

        //    media = peso / i;
      //  }

    }

    mediaP = pesoM / 5;
    cout << "Média de Peso: " << mediaP << endl;

    return 0;
}



/*
76)criar um algoritmo que receba a idade e o peso de 20 pessoas. Calcular e imprimir as médias dos
pesos das pessoas da mesma faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos,
de 21 a 30 anos e maiores de 30 anos.
*/
