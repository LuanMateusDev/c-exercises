#include <iostream>
#include <iostream>

using namespace std;

int main(){

    string filho, sexo, funcio, resp = "S";;
    int numero, idade, totfilho = 0, tot5M = 0, tot5F = 0, totM12 = 0, totF12 = 0;
    float totgasto = 0, totg1 = 0, totg2 = 0, totg3 = 0, totg4 = 0;
    
    while(resp == "S"){

        cout << "Informe o seu nome: ";
        cin >> funcio;
        cout << "Quantos filhos menores de 12 anos você tem: ";
        cin >> totfilho;

        for(int c = 1; c <= totfilho; c++){

            cout << "Qual é o nome do seu " << c << " filho: ";
            cin >> filho;
            cout << "Qual é o sexo dele [M/F]: ";
            cin >> sexo;
            cout << "Qual é a idade de " << filho << ": ";
            cin >> idade;

            if ((sexo == "M") && (idade < 5)){
                tot5M += 1;
                totg1 = tot5M * 1.45;
            }
            if  ((sexo == "F") && (idade < 5)){
                tot5F += 1;
                totg2 = tot5F * 1.45;
            }
            if ((sexo == "M") && (idade >= 5) && (idade <= 12)){
                totM12 += 1;
                totg3 = totM12 * 2.50;
            }
            if((sexo == "F") && (idade >= 5) && (idade <= 12)){
                totF12 += 1;
                totg4 = totF12 * 3.00;
            }
            totgasto =  totg1 + totg2 + totg3 + totg4;
        }
        cout << "\nExistem outros funcionários [S/N]: ";
        cin >> resp;
    }
        cout << "\n_\n";
        cout << "-------------------------------------------------------------------------------\n";
        cout << "                                STATUS                                          \n";
        cout << "-------------------------------------------------------------------------------\n";
        cout << "\nO total de meninos menor de 5 anos: " << tot5M;
        cout << "\nO total de meninas menor de 5 anos: " << tot5F;
        cout << "\nO total de meninos entre 5 a 12 anos: " << totM12;
        cout << "\nO total de menina entre 5 a 12 anos: " << totF12;
        cout << "\nO total necessário de dinheiro para comprar todos os presentes será de: " << totgasto << "R$";
        cout << "\n_\n";
    return 0;
}

/*
30) Faça um algoritmo que ajude uma empresa a comprar os presentes de natal para os filhos dos
funcionários. Para cada funcionário peça o nome e o número de filhos menores de 12 anos. Para
cada filho informado peça o nome, a idade e o sexo (que deve ser F ou M). Informe quando não
houver mais funcionários a serem informados, o total de meninos até 5 anos, o total de meninas
até 5 anos, o total de meninos de 5 a 12 e o total de meninas de 5 a 12. Sabendo que as crianças
menores de 5 anos receberão uma bola de plástico cada uma e que os meninos maiores de 5 anos
receberão um carrinho e as meninas uma boneca, e que o carrinho custa R$2,50, a boneca R$3,00,
e a bola de plástico 1,45, diga no final do algoritmo qual o total de dinheiro necessário para a
compra de brinquedos de natal para os filhos de funcionários.
*/
