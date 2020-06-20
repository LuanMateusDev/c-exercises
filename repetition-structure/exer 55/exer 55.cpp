#include <iostream>

using namespace std;

int main(){

    int inscricao, idade,totF = 0, totM = 0, totexp = 0, tot = 0, totH = 0, totFexp = 0, menor = 120;
    float mediaexp, porcemH = 0;
    string sexo, resp;

    while( inscricao != 0){
        
        tot += 1;
        cout << "=======================\n";
        cout << " TABELA DE INFORMAÇÕES  \n";
        cout << "=======================\n";
        cout << "Informe o número de inscrição do candidato: ";
        cin >> inscricao;
        cout << "Informe a idade do candidato: ";
        cin >> idade;
        cout << "Informe o sexo[M/F]: ";
        cin >> sexo;
        cout << "Informe se possui experiência no serviço[S/N]: ";
        cin >> resp;

        if(sexo == "F"){
            totF += 1;
        } else {
            totM += 1;
        }
        
        if(sexo == "M" && resp == "S"){
            totexp += idade;
        }

        if(sexo == "M" && idade > 45){
            totH += 1;
        }

        if(sexo == "F" && resp == "S" && idade < 35){
            totFexp += 1;
        }

        if(sexo == "F" && resp == "S"){
                if(idade < menor){
                    menor = idade;
            }
        }

        
    }

    mediaexp = totexp / tot;
    porcemH = (totH * 100) / totM;
    cout << "\n_\n";
    cout << "==============\n";
    cout << "   RESULTADO  \n";
    cout << "=============\n";
    cout << "\nTotal de candidatos do sexo feminino: " << totF;
    cout << "\nTotal de candidatos do sexo masculino: " << totM;
    cout << "\nIdade média de homens que já tem experiência no serviço: " << mediaexp;
    cout << "\nPorcentagem de homens com mais de 45 anos: " << porcemH << "%";
    cout << "\nNúmero total de mulheres que possui idade inferior a 35 e com experiência no serviço: " << totFexp;
    cout << "\nA menor idade entre mulheres que já tem experiência no serviço: " << menor;
    cout << "\n_\n";
    return 0;
}

/*\n
55) Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem
para preenchimento de vagas no seu quadro de funcionários, utilizando processamento eletrônico.
Supondo que você seja o programador encarregado desse levantamento, fazer um algoritmo que:
Leia um conjunto de dados para cada candidato contendo:
 Número de inscrição do candidato;
 Idade;
 Sexo (masculino, feminino);
 Experiência no serviço (sim ou não).
O último conjunto contém o número de inscrição do candidato igual a zero.
Calcule:
a) O número de candidatos do sexo feminino;11
b) O número de candidatos do sexo masculino;
c) Idade média dos homens que já tem experiência no serviço;
d) Porcentagem dos homens com mais de 45 anos entre o total de homens;
e) Número de mulheres que tem idade inferior a 35 anos e com experiência no serviço;

f)
A menor idade entre mulheres que já tem experiência no serviço;
Escreva:
a. O número de inscrição das mulheres pertencentes ao grupo descrito no item e;
b. O que foi calculado em cada item acima especificado.
*/