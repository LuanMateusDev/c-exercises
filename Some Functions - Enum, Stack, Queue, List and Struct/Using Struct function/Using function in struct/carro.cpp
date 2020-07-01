#include <iostream>

using namespace std;

struct Carro {
    string nome;
    string cor;
    int    pot;
    int    velMax;
    int    vel;

    void insere(string stnome, string stcor, int stpot, int stvelMax) {
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stvelMax;
        vel = 0;
    }

    void mostra() {
        cout << "Nome do carro: "<< nome << "\n";
        cout << "Cor do "<< nome << ": " << cor << "\n";
        cout << "Potência em cavalos: "<< pot << "C\n";
        cout << "Velocidade atual: " << vel<< "Km/h\n";
        cout << "Velocidade máxima: "<< velMax << "Km/h\n";
    }

    void mudaVel(int stvel) {
        vel = stvel;
        if(vel > velMax)
            vel = velMax;
        if(vel < 0)
            vel = 0;
    }
};

int main(void) {

    Carro car1;

    car1.insere("Corolla", "Preto", 200, 400);

    car1.mudaVel(240);

    car1.mostra();

    
    return 0;
}