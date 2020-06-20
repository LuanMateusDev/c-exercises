#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){

    string nome;
    int idade;

    cout << "Digite o nome: ";
    getline (cin, nome);
    cout << "Digite a idade: ";
    cin >> idade;

    if (idade <=10){

        cout << nome << " você deverá pagar: 30,00R$"; 
    } else if ((idade > 10) && (idade <= 29)){

        cout << nome << " você deverá pagar: 60,00R$";
    } else if ((idade >= 29) && (idade <=45)){

        cout << nome << " você deverá pagar: 120,00R$";
    } else if ((idade > 45) && (idade <=59)){

        cout << nome << " você deverá pagar: 150,00R$";
    } else if ((idade > 59)&&(idade <=65)){

        cout << nome << " você deverá pagar: 250,00R$";
    } else {

        cout << nome << " você deverá pagar: 400,00R$";
    }
    return 0;
}

/*
46)Depois da liberação do governo para as mensalidades dos planos de saúde, as
pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro.
Um vendedor de um plano de saúde apresentou a tabela a seguir. Criar um algoritmo6
que entre com o nome e a idade de uma pessoa e imprimir o nome e o valor que ela
deverá pagar.
 Até 10 anos – R$ 30,00
 Acima de 10 até 29 anos – R$ 60,00
 Acima de 29 até 45 anos – R$ 120,00
 Acima de 45 até 59 anos – R$ 150,00
 Acima de 59 até 65 anos – R$ 250,00
 Maior que 65 anos – R$ 400,00
*/