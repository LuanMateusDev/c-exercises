#include <iostream>

// calcular o maior elemente em cada coluna#include<iostream>

using namespace std;
int main(){
    int m[5][5], a[5], b[5], maior, menor, cont, x, y;
    for(x = 0; x < 5; x++){
        for(y = 0; y < 5; y++){
            cout << "\nDigite o elemento [" << x+1 << "][" << y+1 << "] = ";
            m[x][y] = 1 + rand() % 30;
        }
    }

    // selecionar os menores e maiores elementos das colunas
    for(y = 0; y < 5; y++){
        maior = m[0][y];
        menor = m[0][y];
        for(x = 0; x < 5; x++){
            if(m[x][y] > maior){
                maior = m[x][y];
            }
            if(m[x][y] < menor){
                menor = m[x][y];
            }
        }       
        a[y] = maior;
        b[y] = menor;
    }
    // apresenta a matriz original
    for(x = 0; x < 5; x++){
        for(y = 0; y < 5; y++){
            cout << "M[" << x+1 << "][" << y+1 << "] = " << m[x][y] << "\t";
        }
        cout << "\n";
    }
    // maior elementos
    for(x = 0; x < 5; x++){
        cout << "\nA[" << x+1 << "] = " << a[x];
    }
    // menor elementos
    for(x = 0; x < 5; x++){
        cout << "\nB[" << x+1 << "] = " << b[x];
    }
   
    //system("pause");
    return 0;
}