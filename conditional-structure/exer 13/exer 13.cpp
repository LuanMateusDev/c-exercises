#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num1,num2,dif;

    cout << "Digite um número: ";
    cin >> num1;
    cout << "Digite outro número: ";
    cin >> num2;

    if (num1 > num2) {
        dif = num1 - num2;
        cout << "O maior valor é " << num1 << " e o menor valor é " << num2;
        cout << "\nA diferença entre os dois é: " << dif;
    } else {
        dif = num2 - num1;
        cout << "O maior valor é " << num2 << " e o menor valor é " << num1;
        cout << "\nA diferença entre os dois é: " << dif;
    }

    return 0;
}




