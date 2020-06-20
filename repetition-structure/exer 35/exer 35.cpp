#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    float imposto, anual,depen;
    string cpf, resp = "Sim", nome;
    int contri;

    while(resp == "Sim" || resp == "sim" || resp == "SIM"){

        cout << "Quantos contribuentes existem: ";
        cin >> contri;

        for(int c = 1; c <= contri; c++){

            cout << endl;
            cout << "Digite o seu nome: ";
            cin >> nome;
            cout << "Digite o seu cpf: ";
            cin >> cpf;
            cout << "Quantos dependentes você tem: ";
            cin >> depen;
            cout << "Digite a sua renda anual: ";
            cin >> anual;
        
            depen *= 20;

            if (cpf != "0"){

                cout << "-----------------------\n";
                cout << "         STATUS       \n";
                cout << "------------------------\n";

                if(anual <= 2500){

                    cout << "ISENTO";  
                }else if(anual >= 2501 && anual <= 5500){

                    imposto = (5 * anual) / 100 - depen;
                    cout << "Deverá ser pago 5% de imposto.\n";
                    cout << "Valor descontado em consideração dos dependentes: " << depen << "R$\n";
                    cout << "Valor total de imposto: " << imposto << "R$";
                    
                } else if (anual >= 5501 && anual <= 11000){

                    imposto = (10 * anual) / 100 - depen;
                    cout << "Deverá ser pago 10% de imposto.\n";
                    cout << "Valor descontado em consideração dos dependentes: " << depen << "R$\n";
                    cout << "Valor total de imposto: " << imposto << "R$";

                } else {

                    imposto = (12 * anual) / 100 - depen;
                    cout << "Deverá ser pago 12% de imposto." << endl;
                    cout << "Valor descontado em consideração dos dependentes: " << depen << "R$\n";
                    cout << "Valor total de imposto: " << imposto << "R$";
                }     
                    cout << "\n----------------------";
            }else{
            cout << "CPF INVALIDO!!";
            }
        }
        cout << endl;
        cout << "Deseja fazer novamente? [Sim / Não]: ";
        cin >> resp; 
    }
    return 0;
}

/*
35) Calcular o imposto de renda de um grupo de contribuintes considerando:
 Os dados de cada contribuinte, número do CPF, número de dependentes e renda anual;
 Para cada contribuinte será feito um desconto de R$ 600,00 por dependente;
Os valores de alíquota para cálculo de imposto são:
Renda Líquida Aliquota
até 2.500 Isento
de 2.501 à 5.500 5%
de 5.501 à 11.000 10%5
acima de 11.001
12%
O último cartão, que não será considerando, terá número CPF = 0.
*/