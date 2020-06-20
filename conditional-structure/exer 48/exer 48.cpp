#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string livro, usuario, totdias;

    cout << "Digite o nome do livro: ";
    cin >> livro;
    cout << "Informe o tipo do usuário[Professor / Aluno]: ";
    cin >> usuario;
    
    if (usuario == "Professor"){
        cout << "\nNome do livro: " << livro;
        cout << "\nTipo de usuário: " << usuario;
        cout << "\nTotal de dias: 10"; 
    } else if (usuario == "Aluno"){
        cout << "\nNome do livro: " << livro;
        cout << "\nTipo de usuário: " << usuario;
        cout << "\nTotal de dias: 3";
    } else {
        cout << "\nUsuário Inválido!";
    }

    cout << endl;

    return 0;
}

/*
48) A biblioteca de uma universidade deseja fazer um algoritmo que leia o nome do livro
que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir o
recibo conforme mostrado a seguir. Considerar que o professor tem dez dias para
devolver o livro e o aluno só três dias.
Nome do livro:
Tipo de usuário:
Total de dias:
*/