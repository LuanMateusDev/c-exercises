#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");
    int i, cod = 1, nv = 0, nm = 0, nf = 0, total, maior = 0, codM, totalC = 0;
    double porctf = 0, porct = 0, porvaga = 0;

    while(cod != 0){
        cout << "Informe o código do curso: ";
        cin >> cod;
        if(cod == 0)
        goto end;

        cout << "Informe o número de vagas: ";
        cin >> nv;
        cout << "Informe o número de candidatos do sexo masculino: ";
        cin >> nm;
        cout << "Informe o números de candidatos do sexo feminino: ";
        cin >> nf;

        total = nm + nf;
        porvaga = total/nv;
        porctf = (nf * 100) / total;
        totalC = totalC + total;

        cout << "O curso " << cod << " tem: " << nv << " vagas" << endl;
        cout << "O número de candidatos por vaga é: " << porvaga << " candidatos" << endl;
        cout << "A porcentagem de candidatos do sexo feminino é: " << porctf << "%" << endl << endl;

        if(porvaga > maior){
            maior = porvaga;
            codM = cod;
        }
    }
    end:
    cout << "O maior número de candidatos por vaga é do curso " << codM << " com: " << maior << " candidatos" << endl;
    cout << "O total de candidatos é: " << totalC;
    return 0;
}
/*
Uma universidade deseja fazer um levantamento a respeito de seu concurso vestibular. Para cada
curso, é fornecido o seguinte conjunto de valores:
 O código do curso;
 Número de vagas;
 Número de candidatos do sexo masculino;
 Número de candidatos do sexo feminino.
O último conjunto, para indicar fim de dados, contém o código do curso igual a zero. Fazer
um algoritmo que:
a) Calcule e escreva, para cada curso, o número de candidatos por vaga e a porcentagem
de candidatos do sexo feminino (escreva também o código correspondente do curso);
b) Determine o maior número de candidatos por vaga e escreva esse número juntamente
com o código do curso correspondente (supor que não haja empate);
c) Calcule e escreva o total de candidatos.
*/