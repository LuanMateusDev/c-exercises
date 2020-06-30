#include <iostream>

using namespace std;

int testaPalindromo(char vetor[], char invert[]);

int main(void) {

    setlocale(LC_ALL, "Portuguese");

    char vetor1[5], vetor2[5], invert[5];

    cout << "---------------------------\n";
    cout << "< -- Preencha os vetores -->\n";
    cout << "---------------------------\n";
    cout << "Digite o 1 vetor: ";
    for(int c = 0; c < 5; c++) {
        cin >> vetor1[c];
    }
    cout << "Digite o 2 vetor: ";
    for(int c = 0; c < 5; c++) {
        cin >> vetor2[c];
    }

    system("clear");
    cout << "--------------------------\n";
    cout << "     <-- Status -->\n";
    cout << "--------------------------\n";
    //Chamada da função com os argumentos do primeiro vetor;
    if(testaPalindromo(vetor1, invert) == 1) {
        cout << "- O vetor1 [";
        for(int c = 0; c < 5; c++)
            cout << vetor1[c];
        cout << "] é um políndromo\n";
    } else {
        cout << "- O vetor1 [";
        for(int c = 0; c < 5; c++)
            cout << vetor1[c];
        cout << "] NAO é um políndromo\n";
    }

     //Chamada da função com os argumentos do segundo vetor;
    if(testaPalindromo(vetor2, invert) == 1) { 
           cout << "- O vetor2 [";
        for(int c = 0; c < 5; c++)
            cout << vetor2[c];
        cout << "] é um políndromo\n";
    } else {
        cout << "- O vetor1 [";
        for(int c = 0; c < 5; c++)
            cout << vetor2[c];
        cout << "] NAO é um políndromo\n";
    }

    return 0;
}

int testaPalindromo(char vetor[], char invert[]) {

    int totC = 0, cont = 0;

    //For para passar os caracteres invertido do vetor;
    for(int c = 4; c >= 0; c--) {
        invert[cont] = vetor[c];
        cont++;
    }
    
    //Fpr que analisa se todos os caracteres são iguais;
    for(int c = 0; c < 5; c++) {
        if(vetor[c] == invert[c])
            totC += 1;
    }

    //Se são iguais, ele retorna 1;
    if(totC == 5)
        return 1;
    else
        return 0;
}

/*
Escreva um programa em C++ que leia dois vetores de tamanho igual a 5 e 
verifique se estes são palíndromos. Palíndromo é uma palavra, frase ou qualquer sequência de unidades que tenha a propriedade 
de poder ser lida tanto da direita para esquerda, como da esquerda para a direita e o conteúdo é o mesmo.
*/