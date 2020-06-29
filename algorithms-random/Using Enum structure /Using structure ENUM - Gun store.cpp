#include <iostream>

using namespace std;

int main(void) {

    int code;

    enum armas{revolver = 5, pistola = 12, fuzil = 30, escopeta = 2};

    armas armaSel;

    cout << "------------------------------\n";
    cout << "      <-- Gun Store -->\n";
    cout << "------------------------------\n";
    cout << "Code 1: Revolver\n";
    cout << "Code 2: Pistola\n";
    cout << "Code 3: Fuzil\n";
    cout << "Code 4: Escopeta de cano duplo\n";
    cout << "-------------------------------\n";
    cout << "Chosen: ";
    cin >> code;    
    cout << "\n";
    
    switch(code) {
        case 1: {
            armaSel = revolver;
            cout << "Você escolheu um revolver\n";
            cout << "-> Revolver <- Ammo: " << armaSel << "\n\n";
            break;
        }
        case 2: {
            armaSel = pistola;
            cout << "Você escolheu uma pistola\n";
            cout << "-> Pistola <- Ammo: " << armaSel << "\n\n";
            break;

        }
        case 3: {
            armaSel = fuzil;
            cout << "Você escolheu um fuzil\n";
            cout << "-> Fuzil <- Ammo: " << armaSel << "\n\n";
            break;

        }
        case 4: {
            armaSel = escopeta;
            cout << "Você escolheu uma escopeta de cano duplo\n";
            cout << "-> Escopeta de cano duplo <- Ammo: " << armaSel << "\n\n";
            break;
        }
        default: 
            break;
    }

    return 0;
}
