#include <iostream>

using namespace std;

int main(void) {

    double salario[2], newSalario[2], descontINNS[2], descontIR[2], salarioLiquido[2];
    string nome[2];

    cout << "<-- Pega Informações -->\n";
    for(int c = 0; c < 2; c++){
        cout << "-----------------------------\n";
        cout << "Informe o seu salário: ";
        cin >> salario[c];
        cin.ignore();
        cout << "Informe o seu nome: ";
        getline(cin, nome[c]);
        newSalario[c] = (0.07 * salario[c]) + salario[c];
        descontINNS[c]  = 0.1 * newSalario[c];
        descontIR[c] = 0.08 * newSalario[c];
        salarioLiquido[c] = newSalario[c] - (descontINNS[c] + descontIR[c]); 
    }

    cout << "------------------------------------------------------------------------------------\n";
    cout << "Nome - Novo Salário - Desconto do INSS - Desconto do IR - Salário Líquido\n";
    for(int c = 0;c < 2; c++){
        cout << nome[c] << "\t" << newSalario[c] << "\t" << descontINNS[c] << "\t" << descontIR[c] << "\t" << salarioLiquido[c] << "\n";
    }

    return 0;
}

/*
Desenvolva um programa em C++ que 20 vezes possa entrar com o salário e o nome do funcionário.
Sabe-se que o salário deverá ser reajustado em 7%.
Exibir o nome, o novo salário, o desconto do INSS(10% do salário), o desconto do IR(8% do salário já descontado o INSS) e o salário líquido a cada entrada.
Assuma que as bibliotecas estão incluídas.
*/