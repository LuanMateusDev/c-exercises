#include <iostream>
#include <stdlib.h>

using namespace std;

void result(){
    cout << "================\n";
    cout << "    Resultado   \n";
    cout << "================\n";
}

int main(){

    int nota1,nota2,nota3,nota4,notaf;
    float media;

    cout << "===============\n";
    cout << "     Notas     \n";
    cout << "===============\n";
    cout << "Digite a sua primeira nota: ";
    cin >> nota1;
    cout << "Digite a sua segunda nota: ";
    cin >> nota2;
    cout << "Digite a sua terceira nota: ";
    cin >> nota3;
    cout << "Digite a sua quarta nota: ";
    cin >> nota4;
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    
    result();
    if(media  < 3){
        cout << "REPROVADO!!";
    } else if (media >= 3 && media < 5){
        cout << "Digite a nota do exame final: ";
        cin >> notaf;
        media = (nota1 + nota2 + nota3 + nota4 + notaf) / 5;

        if(media >= 5){
            cout << "Aluno Aprovado!";
        } else {
            cout << "Aluno Reprovado!";
        }
    } else {
        cout << "ALUNO APROVADO!!";
    }

    cout << endl;

    return 0;
}

/*
27) Ler 4 notas escolares, calcular a média do aluno, se a média < 3 dizer que o aluno
foi reprovado; se a média maior ou igual 3 e menor 5 pedir a nota do exame final,
calcular a média anual final e verificar se aluno foi aprovado (media > maior ou igual
a 5 aluno aprovado senão reprovado.
*/