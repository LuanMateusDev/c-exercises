#include <iostream>
#include <queue>

using namespace std;

int main(void) {

    setlocale(LC_ALL, "Portuguese");

    int c = 1; queue <string> cartas;

    cartas.push("Rei de Copas"); cartas.push("Rei de Espadas"); cartas.push("Rei de Ouros"); cartas.push("Rei de Paus");

    cout << "---------------------------------------------------\n";
    cout << "Tamanho da queue: " << cartas.size() << "\n";
    cout << "Primeira carta da queue: " << cartas.front() << "\n";
    cout << "Última carta da queue: " << cartas.back() << "\n";
    cout << "--------------------------------------------------\n";

    //Using while function for show all cards.
    while(!cartas.empty()) {
        cout << c << " Carta: " << cartas.front() << "\n";
        c++;
        cartas.pop();
    }
    
    cout << "\n";

    return 0;
}


