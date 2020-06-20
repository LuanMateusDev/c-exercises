#include <iostream>

using namespace std;

int main(){

    float salario,quilo, quilow, quilow100;

    cout << "Informe o valor da salario minimo: ";
    cin >> salario;
    cout << "Digite a quantidade de quiloW: ";
    cin >> quilo;

    salario /= 7;
    quilow100 = 100 / salario;
    quilow = quilow100 * quilo;
    
    cout << "O valor em reais de cada quilowatt: " << quilow100 << endl;
    cout << "O valor em reais a ser pago: " << quilow << "\n";
    cout << "Novo valor: " << quilow - (10 * quilow) / 100;
    cout << endl;

    return 0;
}

/*
20) Antes de o racionamento de energia ser decretado, quase ninguém falava em
quilowatts; mas, agora, todos incorporaram essa palavra em seu vocabulário.
Sabendo-se que 100 quilowatts de energia custa um sétimo do salário mínimo, efetue
o recebimento do valor do salário mínimo e a quantidade de quilowatts gasto por uma
residência e calcule. Apresente:
 O valor em reais de cada quilowatt.
 O valor em reais a ser pago.
 O novo valor a ser pago por essa residência com um desconto de 10%.
*/