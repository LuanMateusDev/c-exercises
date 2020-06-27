#include <iostream>

using namespace std;

int main() {

    int contador, primeiro, ultimo, proximo;

    primeiro = 1; ultimo = 2;
    for(contador = primeiro; contador <= ultimo; contador++) {
        cout << "\n " << contador;
        proximo = contador * contador;
        cout << " " << proximo;
    }

    contador = primeiro;
    while (contador <= ultimo) {
        cout << "\n " << contador;
        proximo = contador * contador;
        cout << " " << proximo;
        contador++;
    }
   
    //contador = primeiro;
    do {
        cout << "\n " << contador;
        proximo = contador * contador;
        cout << " " << proximo;
        contador++;
    } while (contador < ultimo);


    return 0;
}

//RESPOTA: Caso contador não receba inicialização antes do-while, seu valor irar mudar, ao invés de 1 1, ele vai passar a ser 3 9;