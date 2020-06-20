#include <iostream>

using namespace std;

void getandinvert(int array[], int invertArray[]){

    int n = 9;

    for(int c = 0; c < 10; c++){

        cout << "Digite o " << c + 1 << " valor: ";
        cin >> array[c];

        invertArray[n] = array[c];

        n--;
    }
 
}

void showArray(int invertArray[]){

    for(int c = 0; c < 10; c++){

        cout << c + 1 << "-> " << invertArray[c] << "\n";
    }
}

int main(){

    int array[10], invertArray[10];


    getandinvert(array, invertArray);
    cout << "-------------------------------\n";
    cout << "<-- SHOW INVERTS ELEMENTS -->\n";
    cout << "-------------------------------\n";
    showArray(invertArray);


    return 0;
}

/*
9) Ler da tela e montar uma matriz de 10 elementos e montar uma segunda matriz
com os elementos da primeira invertidos, ou seja, o primeiro passa a ser o último.
*/