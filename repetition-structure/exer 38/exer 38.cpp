#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string comodo, resp = "S";
    int classe, larg,compri, m2, lampada, totlamp = 0,totpotencia;

    cout << "------------------------------\n";
    cout << "   Calculador de quantidade  \n";
    cout << "------------------------------\n";


    while(resp == "S" || resp == "s"){

            cout << "--------------------------\n";
            cout << "    TABELA DE ANÁLISE     \n";
            cout << "--------------------------\n";
            cout << "Qual é cômodo: ";
            cin >> comodo;
            cout << "Qual classe pertence este cômodo? [1,2,3]: ";
            cin >> classe;
            cout << "Qual é o comprimento do seu cômodo: ";
            cin >> compri;
            cout << "Qual é a largura do seu cômodo: ";
            cin >> larg;

            m2 = compri * larg;

            if(classe >=1 && classe <= 3){

                if(classe == 1){
                    m2 *= 15;
                    lampada = m2 / 60;
                    totlamp += lampada; 
                    totpotencia += m2;

                } else if(classe == 2){
                    m2 *= 18;
                    lampada = m2 / 60;
                    totlamp += lampada;
                    totpotencia += m2;

                }else {
                    m2 *= 20;
                    lampada = m2 / 60;
                    totlamp += lampada;
                    totpotencia += m2;

                }
                cout << "\n_\n";
                cout << "-----------------------------------------\n";
                cout << "   QUANTIDADE DE LAMPADAS POR CÔMODO     \n";
                cout << "-----------------------------------------\n";
                cout << "Será necessário para o " << comodo << endl;
                cout << "Potêncial de iluminação: " << m2 << endl;
                cout << "Número de lampadas necessárias: " << lampada << endl;


            } else {

                cout << "Classe inexistente!!";
            }

        cout << "Deseja análisar outro cômodo? [S / N]: ";
        cin >> resp;
    }

    cout << "\n\n";
    cout << "----------------------\n";
    cout << " RESULTADO DA ANÁLISE \n";
    cout << "----------------------\n";
    cout << "Total de lampadas para casa toda: " << totlamp;
    cout << "\nTotal de potência: " << totpotencia;
    cout << "\n_\n";
    
    return 0;
}

/*

38) Para se determinar o número de lâmpadas necessárias para cada cômodo de uma residência,
existem normas que dão o mínimo de potência de iluminação exigida por metro quadrado (m2)
conforme a utilização deste cômodo. Seja a seguinte tabela tomada como exemplo:
Utilização Classe Potência / m 2
Quarto
1 15
Sala de TV 1 15
Salas 2 18
Cozinha 2 18
Varandas 2 18
Escritório 3 20
Banheiro 3 20
Supondo que só serão usadas lâmpadas de 60 W, fazer um algoritmo que:
Leia um número indeterminado de linhas contendo cada uma:
 Cômodo de uma residência;
 Classe de iluminação deste cômodo;
 As duas dimensões do cômodo.6
Calcule e escreva:
 Para cada cômodo:
 O cômodo;
 Potência de iluminação;
 Número de lâmpadas necessárias;
 Para toda a residência:
 Total de lâmpadas;
 Total de potência.
Observações: se o número calculado de lâmpadas dor fracionário, considerar o menor inteiro
que contenha esse número. Ex.: 8,3= 9; 8,7=9.

*/