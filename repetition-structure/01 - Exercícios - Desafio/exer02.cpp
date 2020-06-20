#include <iostream>
#include <string.h>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    string resp;
    double rendaP, rendaF,totA = 0, totO = 0, acumula1 = 0, acumula2 = 0, acumula3 = 0, porcem1, porcem2, porcem3;
    int totD = 0, totR = 0, tot = 0;

        cout << "==========================================================\n";
        cout << "<-- Tabela de Informações -->\n";
        cout << "<-- Para parar o código digite [0] para renda pessoal -->\n";
    while(1){
        
        tot += 1;
        cout << "==========================================================\n";
        cout << "Informe sua renda pessoal R$: ";
        cin >> rendaP;
        if(rendaP == 0)
            break;
        cout << "Informe sua renda familiar R$: ";
        cin >> rendaF;
        cout << "Informe o total gasto com alimentação R$: ";
        cin >> totA;
        cout << "Informe o total gasto com outras despesas R$: ";
        cin >> totO;

        if(totO > 200){
            totD += 1;
        }

        if(rendaP > rendaF){
            totR += 1;
        }
        
        acumula1 += rendaP + rendaF;
        acumula2 += totA;
        acumula3 += totO;
    }

    if(tot == 1 && rendaP == 0){
        porcem1 = 0;
        porcem2 = 0;
        porcem3 = 0;

    } else {
        tot -= 1;
        porcem1 = (totD * 100) / tot;
        porcem2 = (acumula2 * 100) / acumula1;
        porcem3 = (acumula3 * 100) / acumula1;
    }

    cout << "=======================\n";
    cout << "<-- Resultados Gerais -->\n";
    cout << "=======================\n";
    cout << "Porcentagem dos alunos que gastam acima de R$200 reais com outras despesas: " << porcem1 << "%";
    cout << "\nNúmero total de alunos com renda pessoal maior que a renda familiar: " << totR;
    cout << "\nPorcentagem de gastos com alimentação: " << porcem2 << "%";
    cout << "\nPorcentagem de gastos com outras despesas: " << porcem3 << "%";
    cout << "\n\n";

    return 0;
}