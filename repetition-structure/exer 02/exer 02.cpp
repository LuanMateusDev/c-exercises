#include <iostream>
#include <stdlib.h>

using namespace std;
// 2
int main(){

    int num;

    cout << "Digite um número: ";
    cin >> num;

    for (int c = 0 ; c <= num; c++){

        if(c % 2 == 0){

        cout << "\n" << c;

        }
    }


    return 0;
}


