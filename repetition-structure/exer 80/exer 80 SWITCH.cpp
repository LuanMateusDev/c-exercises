#include <iostream>
#include <strings.h>
#include <iomanip>

using namespace std;

int main(){

    int time, lugar, totF = 0, totB = 0, totV = 0, totFL = 0, totO = 0, totRO = 0, totNF = 0;
    double salario, salarioB, media;

    while(time != 0){

        cout <<" \n_\n";
        cout << "<--- Qual é o seu time de coração --->\n";
        cout << "1 - Fluminense, 2 - Botafogo, 3 - Vasco, 4 - Flamengo, 5 - Outros\n";
        cout << "Código: ";
        cin >> time;
        if(time == 0)
            break;
        cout << "<--- Onde você mora --->\n";
        cout << "1 - RJ, 2 - Niterói, 3 - Outros: ";
        cin >> lugar;
        cout << "<--- Salário --->\n";
        cout << "Qual é o seu salário R$: ";
        cin >> salario;

        switch(time){

            case 1: {
                totF += 1;
                break;
            }
            case 2: {
                totB += 1;
                salarioB += salario;
                break;
            }
            case 3:  {
                totV += 1;
                break;
            }
            case 4: {
                totFL += 1;
                break;
            }
            case 5: {
                totO += 1;
                break;
            }
            default: {
                time = 0;
                break;
            }
                
            
        }

        if(lugar == 1 && time == 5){
            totRO += 1;
        } else if (lugar == 2 && time == 1){
            totNF += 1;
        }   

    }

    if(totB == 0){
        media = 0;
    } else {
        media = salarioB / totB;
    }

    cout << "======================\n";
    cout << "       RESULTADO        \n";
    cout << "======================\n";
    cout << "\nNúmero de torcedores do Fluminense: " << totF;
    cout << "\nNúmero de torcedores do Botafogo: " << totB;
    cout << "\nNúmero de torcedores do Vasco: " << totV;
    cout << "\nNúmero de torcedores do Flamengo: " << totFL;
    cout << "\nNúmero de torcedores de Outros times: " << totO;
    cout << "\nA média salarial dos torcedores do Botafogo R$: " << setprecision(4) << media;
    cout << "\nO número de pessoas moradoras do Rio de Janeiro, torcedores de outros clubes: " << totRO;
    cout << "\nO número de pessoas de Niterói torcedoras do Fluminense: " << totNF;
    cout << "\n_\n";

    return 0;
}

