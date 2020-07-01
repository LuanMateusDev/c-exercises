#include <iostream>

using namespace std;

struct Carro {
    string nome;
    string cor;
    int    pot;
    int    velMax;
};

int main(void) {

    Carro car1;

    car1.nome = ("Corola"); car1.cor = ("Preto"); car1.pot = 300; car1.velMax = 200;

    cout << "Nome do carro: "<< car1.nome << "\n";
    cout << "Cor do "<< car1.nome << ": " << car1.cor << "\n";
    cout << "Potência em cavalos: "<< car1.pot << "C\n";
    cout << "Velocidade máxima: "<< car1.velMax << "Km/H\n";

   




    return 0;
}