#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string sexo, resp;
    int tots = 0, totn = 0,totf = 0,totm = 0; 
    float total = 0;

    for(int c = 1; c<= 5; c++){

        cout << "Informe o seu sexo[M/F]: ";
        cin >> sexo;
        cout << "Você gostou do produto? [Sim / Não]: ";
        cin >> resp;

        if (resp == "s" || resp =="S" || resp == "Sim" || resp == "sim"){
            tots += 1;
        } else {
            totn += 1;
        }

        if((sexo == "F" || sexo == "f") && resp == "s" || resp =="S" || resp == "Sim" || resp == "sim"){
            totf += 1;
        } else if ((sexo == "M" || sexo == "m") && resp == "n" || resp == "N" || resp == "Não"){ 
            totm += 1;
        } 
         total = tots + totn;
    }
       
        cout << "=====================\n";
        cout << "     Resultado       \n";
        cout << "=====================\n";
        cout << "\nTotal de pessoas que respoderam sim: " << tots;
        cout << "\nTotal de pesoas que respoderam não: " << totn;
        cout << "\nTotal de mulheres que respoderam sim: " << (totf * 100) / total << "%";
        cout << "\nTotal de homens que reponderam não: " << (totm * 100) / total << "%" << endl;
    return 0;
}

/*
47) Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um
novo produto lançado no mercado. Para isso, forneceu o sexo do entrevistado e sua resposta (sim
ou não). Sabendo-se que foram entrevistadas 2000 pessoas, fazer um algoritmo que calcule e
escreva:
a) O número de pessoas que responderam sim;
b) O número de pessoas que responderam não;
c) A porcentagem de pessoas do sexo feminino que responderam sim;
d) A porcentagem de pessoas do sexo masculino que responderam não;
*/