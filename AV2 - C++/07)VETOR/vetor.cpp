#include <iostream>

using namespace std;

int main(void) {

    int aux, v[8] = {5,1,4,2,7,8,3,6};

    for(int i = 5; i < 8; i++) {
        aux = v[i];
        v[i] = v[i - 5 + 1];
        v[i - 5 + 1] = aux;
    }

    for(int i = 0; i < 8; i++){
        cout << i << "-> " << v[i] << "\n";
    }

    return 0;
}