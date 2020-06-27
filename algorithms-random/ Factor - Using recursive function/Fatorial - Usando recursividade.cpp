#include <iostream>

using namespace std;

void Fatorial(int numero, int res = 0, int number = 0, int f = 0);

int main(void) {

    int num;

    cout << "---------------------\n";
    cout << "   <-- FATORIAL -->\n";
    cout << "--------------------\n";
    cout << "Digite o valor a ser fatorado: ";
    cin >> num;
    cout << num << "!: ";
    
    //Mostragem da estrutura de um fatorial;
    for(int c = num; c > 0; c--) {
        if(c == 1) {
            cout << c;
            break;
        }
        cout << c << "x";
    }

    //Chamada da função;
    Fatorial(num);
  

    return 0;
}

void Fatorial(int numero, int res, int number, int f) {

    //Inicializando o res;
    number += 1;
    if(number == 1)
        res = numero;

    //Cálcula para o resultado do fatorial;
    f = numero - 1;
    res *= f; 

    //Decisão para se a recursividade ainda vai ser chamada ou não;
    if(numero > 2) {
        Fatorial(--numero, res, number);
    } else {
        cout << " => "<< res << endl;
    }
}



