#include <iostream>

using namespace std;

int main(void) {

    setlocale(LC_ALL, "Portuguese");
    float salario, reajuste;

    cout << "-----------------------------------------------\n";
    cout << "          <-- DIA DA ALEGRIA -->\n";
    cout << "-----------------------------------------------\n";
    cout << "Informe o salário do funcionário R$: ";
    cin >> salario;
    cout << "Quantos porcento é o reajuste: ";
    cin >> reajuste;

    cout << "-------------------------------\n";
    cout << "         <-- STATUS -->\n";
    cout << "-------------------------------\n";
    cout << "Valor do reajuste de " << reajuste << "%: " << ((reajuste * salario) / 100) << "$\n";
    cout << "Novo salário R$: " << ((reajuste * salario) / 100) + salario << "$\n"; 

    return 0;
}