#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string nome;
    double nota1,nota2,nota3,nota4,media,notafinal,mediafinal;

    cout << "Digite o nome: ";
    cin >> nome;
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;
    cout << "Digite a quarta nota: ";
    cin >> nota4;

    media = (nota1+nota2+nota3+nota4) / 4;

    cout << "\n-----------------------";
    cout << "\n       STATUS          ";
    cout << "\n-----------------------" ;
    if (media >= 7 ){

        cout << "\nALUNO APROVADO!!";

    } else { 

        if (media < 7) {
         
        cout << "\nDigite a nota do exame final: ";
        cin >> notafinal;
        mediafinal = (nota1 + nota2 + nota3 + nota4 + notafinal) / 5;

    } if (mediafinal >= 5){

        cout << "\nAluno aprovado no exame final!! ";

    } else if (mediafinal < 5) {

        cout << "\nAluno reprovado!! ";
    }
}
    return 0;
}


/*
28) Faça um algoritmo que leia 4 notas de alunos, calcule a média e imprima na tela uma
mensagem que o aluno foi aprovado se a média do aluno foi >= 7. Se a média foi
<7 pedir a nota do exame final, calcular a nova média que se>= 5 informar então
que o aluno foi aprovado por exame final, caso a média seja <5 informe que o aluno
foi reprovado.
*/