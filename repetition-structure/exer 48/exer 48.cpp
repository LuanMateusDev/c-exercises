#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string sexom;
    int quantinasci, meses;
    float  porc1 = 0, porc2 = 0, porc3 = 0;

    cout << "Quantas crianças nasceram neste período: ";
    cin >> quantinasci;

    for(int c =1; c <= quantinasci; c++ ){

        if(c != quantinasci){
            cout << "Informe o sexo da criança: ";
            cin >> sexom;
            cout << "Informe o número de meses de vida da criança: ";
            cin >> meses;

            porc1 += 1;

            if(sexom == "M" || sexom == "m"){
            porc2 += 1;
            }

            if(meses <= 24){
            porc3 += 1;
            }
            

        } else {

            sexom = "vazio.";
            porc1 = (porc1 / quantinasci) * 100;
            porc2 = (porc2 / quantinasci) * 100;
            porc3 = (porc3 / quantinasci) * 100; 
        }
        

    }

    cout << "====================\n";
    cout << "      Resultado     \n";
    cout << "====================\n";
    cout << "Porcentagem de crianças mortas no período: " << porc1 << "%";
    cout << "\nPorcentagem de crianças do sexo masculino mortas no período: " << porc2  << "%";
    cout << "\nPorcentagem de crianças que viveram 24 meses ou menos no período: " << porc3 << "%" << endl;

    return 0;
}

/*
48) Foi feita uma pesquisa para determinar o índice de mortalidade infantil em um certo período. Fazer
um algoritmo que:
 Leia inicialmente, o número de crianças nascidas no período;
 Leia, em seguida, um número indeterminado de linhas, contendo, cada uma, o sexo de
uma criança morta (masculino, feminino) e o número de meses de vida da criança. A última
linha, que não entrará nos cálculos, contém no lugar do sexo a palavra "vazio".;
Determine e imprima:
a) A porcentagem de crianças mortas no período;
b) A porcentagem de crianças do sexo masculino mortas no período;
c) A porcentagem de crianças que viveram 24 meses ou menos no período.
*/

