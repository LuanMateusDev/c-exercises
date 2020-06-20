#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string canal = "1";
    int tot = 0, total = 0, totc = 0, totP4 = 0, totP5 = 0, totP7 = 0, totP13 = 0;
    float tot4 = 0,tot5 = 0,tot7 = 0,tot13 = 0;

    while( canal != "0"){

        cout << "Quantas pessoas estão assistindo televisão: ";
        cin >> tot;
        cout << "Informe o seu canal de preferência [4, 5, 7 ou 13] ou se a tv está desligada: ";
        cin >> canal;
        
        totc += 1;
        total += tot;

        if(canal == "4"){
            totP4 += tot;
            tot4 += 1;
        } else if (canal == "5"){
            totP5 += tot;
            tot5 += 1;
        } else if (canal == "7"){
            totP7 += tot;
            tot7 += 1;
        } else if (canal == "13"){
            totP13 += tot;
            tot13 += 1;
        } else if (canal == "desligado") {
            totc -= 1;
            total -= tot;
        }

    }

    totP4 = (totP4 * 100) / total;
    totP5 = (totP5 * 100) / total;
    totP7 = (totP7 * 100) / total;
    totP13 = (totP13 * 100) / total;
    tot4 = (tot4 / totc) * 100;
    tot5 = (tot5 / totc) * 100;
    tot7 = (tot7 / totc) * 100;
    tot13 = (tot13 / totc)* 100;

    cout << "===================\n";
    cout << "   Estatísticas    \n";
    cout << "===================\n";
    cout << "Porcentagem de audiência da emissora 4: " << totP4 << "%\n";
    cout << "Porcentagem de audiência da emissora 5: " << totP5 << "%\n";
    cout << "Porcentagem de audiência da emissora 7: " << totP7 << "%\n";
    cout << "Porcentagem de audiência da emissora 13: " << totP13 << "%\n";
    cout << "Porcentagem da emissora 4: " << tot4 << "%\n";
    cout << "Porcentagem da emissora 5: " << tot5 << "%\n";
    cout << "Porcentagem da emissora 7: " << tot7 << "%\n";
    cout << "Porcentagem da emissora 13: " << tot13 << "%" << endl;
      

    return 0;
}

/*
49) Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma certa cidade, num
determinado dia. Para cada casa visitada é fornecido o número do canal (4, 5, 7, 13) e o número
de pessoas que o estavam assistindo naquela casa. Se a televisão estivesse desligada, nada era
anotado, ou seja, esta casa não entrava na pesquisa. Fazer um algoritmo que:

Leia um número indeterminado de dados, sendo que o "FLAG" correspondente ao
número do canal igual a zero;
 Calcule a porcentagem de audiência para cada emissora;
 Escreva o número do canal e a sua respectiva porcentagem.
*/