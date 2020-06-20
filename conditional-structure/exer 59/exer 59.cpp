#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){

    int num;
    cout << "Indicador de Mês\n";
    cout << "Digite um número entre 1 a 12: ";
    cin >> num;

    if (num == 1){
        cout << "1 equivale ao mês: Janeiro.";
    } else if (num == 2){
        cout << "2 equivale ao mês: Fevereiro.";
    }else if (num == 3){
        cout << "3 equivale ao mês: Março.";
    }else if (num == 4){
        cout << "4 equivale ao mês: Abril.";
    }else if (num == 5){
        cout << "5 equivale ao mês: Maio.";
    }else if (num == 6){
        cout << "6 equivale ao mês: Junho.";
    }else if (num == 7){
        cout << "7 equivale ao mês: Julho.";
    }else if (num == 8){
        cout << "8 equivale ao mês: Agosto.";
    }else if (num == 9){
        cout << "9 equivale ao mês: Setembro.";
    }else if (num == 10){
        cout << "10 equivale ao mês: Outubro.";
    }else if (num == 11){
        cout << "11 equivale ao mês: Novembro.";
    }else if (num == 12){
        cout << "12 equivale ao mês: Dezembro.";
    }else {
        cout << "Não existe mês com este número.";
    }

    cout << endl;



    return 0;
}

/*
59) Ler um número inteiro entre 1 a 12 e escrever o mês correspondente. Caso o usuário
digite um número fora desse intervalo, deverá aparecer uma mensagem informando
que não existe mês com este número.
*/