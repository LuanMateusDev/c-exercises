#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string resp;
    int nota1,nota2,nota3,totaulas,c = 1, matricula, maior = 0,menor = 100,totreprovadoF = 0,totreprovadoP = 0,totreprovadoPF = 0, totaprovado = 0, totalNotas = 0;
    float notafinal, porcemF = 0, totreprovados = 0;

    while(c <= 4){

            cout << "Digite a sua matrícula: ";
            cin >> matricula;
            cout << "Digite a sua primeira nota: ";
            cin >> nota1;
            cout << "Digite a sua segunda nota: ";
            cin >> nota2;
            cout << "Digite a sua terceira nota: ";
            cin >> nota3;
            cout << "Quantas aulas você esteve presente: ";
            cin >> totaulas;

            totalNotas += notafinal;
            notafinal = (nota1+nota2+nota3) / 3;

            if(notafinal < menor){
                menor = notafinal;
            }
            if(notafinal > maior){
                maior = notafinal;
            }

            if(notafinal >= 60 && totaulas >= 40){
                cout << "Matrícula: " << matricula << "\n";
                cout << "Frequência: " << totaulas << "\n";
                cout << "Nota final: " << notafinal << "\n";
                cout << "Status: Aprovado";

            } else if (notafinal < 60 && totaulas >= 40) {
                cout << "Matrícula: " << matricula << "\n";
                cout << "Frequência: " << totaulas << "\n";
                cout << "Nota final: " << notafinal << "\n";
                cout << "Status: Reprovado"; 
                totreprovadoP += 1;
            } else if (notafinal >= 60 && totaulas < 40) {
                cout << "Matrícula: " << matricula << "\n";
                cout << "Frequência: " << totaulas << "\n";
                cout << "Nota final: " << notafinal << "\n";
                cout << "Status: Reprovado";
                totreprovadoF += 1; 
            } else {
                cout << "Matrícula: " << matricula << "\n";
                cout << "Frequência: " << totaulas << "\n";
                cout << "Nota final: " << notafinal << "\n";
                cout << "Status: Reprovado";
                totreprovadoPF += 1;
            }

            totreprovados = totreprovadoP + totreprovadoF + totreprovadoPF; 
            c++;
        cout << endl;
    }

            porcemF = (totreprovadoF / totreprovados) * 100;
            cout << "\n\n\n";
            cout << "Maior nota da turma: " << maior << "\n";
            cout << "Menor nota da turma: " << menor << "\n";
            cout << "Média da turma: " << totalNotas / 4 << "\n";
            cout << "Total de alunos reprovados: " << totreprovados << "\n";
            cout << "Porcentagem de alunos reprovados pro falta: " << porcemF << "%" << "\n";
            cout << "\n\n\n";

    return 0;
}

/*
51) O sistema de avaliação de uma determinada disciplina obedece aos seguintes critérios:
 Durante o semestre são dadas três notas;
 A nota final é obtida pela média aritmética das notas dadas durante o curso;
 É considerado aprovado o aluno que obtiver a nota final superior ou igual a 60 e que tiver
comparecido a um mínimo de 40 aulas.
*/
