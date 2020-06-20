#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num;

    cout << "Digite um número: ";
    cin >> num;

    for (int c = 1 ; c <= num; c++)
        cout << "\n" << c;

    return 0;
}



