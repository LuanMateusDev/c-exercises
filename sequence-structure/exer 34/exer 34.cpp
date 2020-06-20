#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int valor;
    float desconto, novo_valor;
    cout << "Digite o valor do produto: ";
    cin >> valor;

    desconto = valor - (valor * 0.09);

    novo_valor = valor;

    cout << " O desconto será de: " << novo_valor; 





    return 0;
}


/*Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas
oferecendo desconto. Forneça o valor de um produto e apresente o novo valor tendo
em vista que o desconto foi de 9%.*/