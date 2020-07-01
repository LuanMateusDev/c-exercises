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
        cout << "\nNome do carro: "<< nome << "\n";
        cout << "Cor do "<< nome << ": " << cor << "\n";
        cout << "Potência em cavalos: "<< pot << "C\n";
        cout << "Velocidade atual: " << vel<< "Km/h\n";
        cout << "Velocidade máxima: "<< velMax << "Km/h\n\n";
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

    Carro car[2];

    car[0].insere("Tornado", "Sand", 400, 300);
    car[1].insere("Race", "Black", 300, 200); 
    

    for(int c = 0; c < 2; c++) {
         car[c].mostra();
    } 

    
    return 0;
}