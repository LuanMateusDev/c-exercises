#include <iostream>

using namespace std;

void detran(int year, int price){
    cout << "---------------------------------\n";
    cout << "        <-- STATUS -->\n";
    cout << "---------------------------------\n";
    if(year >= 1990 && year <= 2000) {
        cout << "Seu veículo possui o ano de fabricação entre os anos de 1990 e 2000, portanto o imposto sobre ele será de 1%.\n";
        cout << "Valor do véiculo sem imposto R$: " << price << "$";
        cout << "\nValor do imposto R$: " << 0.01 * price << "$";
        cout << "\nValor do veículo com imposto R$: " << (0.01 * price) + price << "$\n";
    } else if (year > 2000) { 
        cout << "Seu veículo possui o ano de fabricação superior ao ano 2000 , portanto o imposto sobre ele será de 1.5%.\n";
        cout << "Valor do veículo sem imposto R$: " << price << "$";
        cout << "\nValor do imposto R$: " << 0.015 * price << "$";
        cout << "\nValor do veículo com imposto R$: " << (0.015 * price) + price << "$\n";
    } else { 
        cout << "Seu veículo possui o ano de fabricação inferior ao ano 1990, portanto está isento de imposto.\n";
    }
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int year;
    float price;

    cout << "----------------------------------------------\n";
    cout << "          <-- DETRAN DA ALEGRIA -->\n";
    cout << "----------------------------------------------\n";
    cout << "Informe o ano de fabricação do veículo: ";
    cin >> year;
    cout << "Informe o preço do veículo R$: ";
    cin >> price;

    detran(year, price);

    return 0;
}



