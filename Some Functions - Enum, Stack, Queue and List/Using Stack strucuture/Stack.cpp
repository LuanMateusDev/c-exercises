#include <iostream>
#include <stack>

using namespace std;

int  main() {

    stack <string> cartas;

    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouros");
    cartas.push("Rei de paus");

    cout << "Quantas cartas a pilha possui: " << cartas.size() << "\n";
    cout << "Carta que está no topo da pilha: " << cartas.top() << "\n\n";

    while(!cartas.empty()) {
        cout << cartas.top() << "\n";
        cartas.pop();
    }

    cout << "\n\n";



    return 0;
}