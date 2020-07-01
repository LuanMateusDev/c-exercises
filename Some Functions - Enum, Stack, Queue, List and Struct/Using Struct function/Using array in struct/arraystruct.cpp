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

    Carro *carros = new Carro[4];

    Carro car1, car2, car3, car4;

    carros[0] = car1;   carros[1] = car2;   carros[2] = car3;   carros[3] = car4; 

    carros[0].insere("Tornado", "Sand", 400, 300);
    carros[1].insere("Race", "Black", 300, 200); 
    carros[2].insere("Blacki", "Preto", 300, 200); 
    carros[3].insere("Fast", "Prata", 500, 300);

    for(int c = 0; c < 4; c++) {
         carros[c].mostra();
    } 

    
    return 0;
}