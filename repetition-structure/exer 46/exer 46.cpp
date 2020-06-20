#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string turma, presente,resp = "s";
    int totmatricula = 0, matricula = 0;
    float porcentagemafk = 0,totafk = 0, totturma = 0;

    while(resp == "s" || resp == "S" || resp == "Sim"){
        
        cout << "==================================\n";
        cout << "      TABELA DE INFORMAÇÕES       \n";
        cout << "==================================\n";
        cout << "Informe qual é a sua turma: ";
        cin >> turma;
        cout << "Informe o número de alunos matrículados na turma " << turma << ": ";
        cin >> totmatricula;

        for(int i = 1; i <= totmatricula; i++ ){
             cout << "Informe a sua matrícula: ";
             cin >> matricula;
             cout << "Presença [P / F]: ";
             cin >> presente;

            if(presente == "f" || presente == "F"){
                totafk += 1;
            }
            porcentagemafk = (totafk / totmatricula) * 100;
        }
         if (porcentagemafk > 5){
                totturma += 1;
            }

        cout << "======================\n";
        cout << "      Resultado       \n";
        cout << "======================\n";
        cout << "\nTurma: " << turma;
        cout << "\nPorcentagem de Faltas: " << porcentagemafk << "%" << endl;
        porcentagemafk = 0;
        totafk = 0;

        cout << "Deseja analisar outra turma? [Sim / Não]: ";
        cin >> resp;
    }   

    cout << "Total de turmas com mais de 5% de faltas: " << totturma << endl;

    return 0;
}

/*
46) Deseja-se fazer um levantamento a respeito da ausência de alunos à primeira prova de Algoritmo
de Computadores para cada uma das 14 turmas existentes. Para cada turma, é fornecido um
conjunto de valores, sendo que os dois primeiros valores do conjunto corresponde à identificação
da turma (A, ou B, ou C,...) e ao número de alunos matriculados, e os demais valores deste
conjunto contém o número de matrícula do aluno e a letra A ou P para o caso de o aluno estar
ausente ou presente, respectivamente. Fazer um algoritmo que:

Para cada turma, calcule a porcentagem de ausência e escreva a identificação da turma e a
porcentagem calculada;

Determine e escreva quantas turmas tiveram porcentagem de ausência superior a 5%.
*/