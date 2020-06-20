#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){

    double salario, reajuste; 

    cout << "Digite o seu salário: ";
    cin >> salario;
    
    if (salario < 500){
        
        reajuste = salario * 0.15;
        salario = salario + reajuste;
        cout << "Salário: " << salario;
    } else if ((salario >= 500) && (salario <= 1000)){

        reajuste = salario * 0.10;
        salario = salario + reajuste;
        cout << "Salário: " << salario;
    } else {

        reajuste = salario * 0.05;
        salario = salario + reajuste;
        cout << "Salário: " << salario;
    }
    return 0;
}




/*17) Efetue o cálculo do salário de um funcionário. Considere que o funcionário deverá
receber um reajuste de 15% caso seu salário seja menor que 500, se o salário for
maior ou igual a 500, mas menor ou igual a 1000, seu reajuste será de 10%, caso
seja ainda maior que 1000, o reajuste deverá ser de 5%. Deverá ser mostrado o
valor do novo salário.*/
