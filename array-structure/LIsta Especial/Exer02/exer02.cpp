#include <iostream>
#include <cstring>

using namespace std;

int main(void){

    int c = 0;
    string nomes[10];

    while(c < 10){

        cout << "Digite o " << c  << " nome com até 15 posições alfanuméricas: ";
        cin >> nomes[c];

        if(nomes[c].length() > 15){
            cout << "<----------------------- WARNIG ------------------------>\n";
            cout << "LIMITE DE 15 CARACTERES ULTRAPASSADO!!! TENTE NOVAMENTE!!\n\n";
            cout << "-----------------------------------------------------------\n";
            c - 1;
        }else{
            c++;
        }
    }

    cout << "--------------------------------\n";
    cout << "      Apresentando os Nomes.\n";
    cout << "---------------------------------\n";

    for(int c = 0; c < 10; c++){
        cout << c + 1 <<" -> " << nomes[c] << "\n";
    }

    return 0;
}

/*
2) Ler da tela e montar uma matriz de 10 elementos que receberão nomes de até
15 posições alfanuméricas.
*/