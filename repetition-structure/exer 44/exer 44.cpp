#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    string resp = "S";
    int paisA = 90000000, paisB = 200000000, porcentagem1, porcentagem2, anos;

    while (resp == "Sim" || resp == "S" || resp == "s")
    {
        cout << "=======================\n";
        cout << "   INDO PARA O FUTURO  \n";
        cout << "=======================\n";

        cout << "Quantos anos você quer passar: ";
        cin >> anos;

        for (int c = 1; c <= anos; c++)
        {
            porcentagem1 = (3 * paisA) / 100;
            porcentagem2 = (1.5 * paisB) / 100;

            paisA += porcentagem1;
            paisB += porcentagem2;

            if (paisA >= paisB)
            {
                break;
            }
        }

        if (paisA > paisB)
        {
            cout << "==========================\n";
            cout << "        RESULTADO         \n";
            cout << "==========================\n";
            cout << "Quantidade de habitantes depois de " << anos << " anos: "  << paisA << endl;
            cout << "Total de anos necessário para PaísA passar ou igualar a PaísB: " << anos << endl;
            resp = "N";
        }
        else
        {
            cout << "ANOS INSUFICIENTE!!\n";
            cout << "Deseja tentar novamente? [Sim / Não]: ";
            cin >> resp;
        }
    }

    return 0;
}

/*
44) Supondo que a população de um país A seja da ordem de 90.000.000 de habitantes com uma taxa
anual de crescimento de 3% e que a população de um país B seja, aproximadamente, de
200.000.000 de habitantes com uma taxa anual de crescimento de 1,5%, fazer um algoritmo que
calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou
iguale a população do país B, mantidas essas taxas de crescimento.
*/