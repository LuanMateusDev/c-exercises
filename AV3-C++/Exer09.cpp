#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");
    double nota[4], mediaP;

    cout << "--------------------------------\n";
    cout << "<-- Concurso da Felicidade -->\n";
    cout << "--------------------------------\n";
    for(int c = 0; c < 4; c++) {
        cout << "Digite a " << c + 1 << " nota: ";
        cin >> nota[c];
        mediaP += nota[c] * (c + 1);
    }
    cout << "-----------------------\n";
    cout << "<-- Média Ponderada -->\n";
    cout << "------------------------\n";
    cout << "Sua média foi: " << mediaP / (1 + 2 + 3 + 4) << "\n\n";

    return 0;
}