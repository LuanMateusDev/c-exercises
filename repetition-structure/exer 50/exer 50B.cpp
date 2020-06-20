#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string sexo;
    int code = 1, vagas = 0, tot1 =0, tot2=0, tot3=0, id=0, totT=0;
    float totm1=0,totm2=0,totm3=0, totf1=0,totf2=0,totf3=0, pot1=0,pot2=0, pot3=0;

    cout << "==============================\n";
    cout << "       TABELA DE CURSOS       \n";
    cout << "==============================\n";
    cout << "[1]Sistemas de Informação\n";
    cout << "[2]Ciência da Computação\n";
    cout << "[3]Análise e Desenvolvimento de Sistemas\n";
    cout << "==============================\n";


    while (code != 0){

        cout << "Digite a quantidade de vagas: ";
        cin >> vagas;

        for(int c = 1 ; c <= vagas; c++){

        
           cout << "Informe o código do curso: "; 
           cin >> code;

        if(code == 0)
            goto end;

           cout << "Informe o sexo[M/F]: ";
           cin >> sexo;

            if(code == 1 && sexo == "M"){
                totm1 += 1;
                tot1 += 1;
            } else if(code == 2 && sexo == "M"){
                totm2 += 1;
                tot2 += 1;
            } else if (code == 3 && sexo == "M"){
                totm3 += 1;
                tot3 += 1;
            } else if (code == 1 && sexo == "F"){
                totf1 += 1;
                tot1 += 1;
            } else if (code == 2 && sexo == "F"){
                totf2 += 1;
                tot2 += 1;
            } else if (code == 3 && sexo == "F"){
                totf3 += 1;
                tot3 += 1;
            }  

        }
        end:
        totf1 = (totf1 / vagas) * 100;
        totf2 = (totf2 / vagas) * 100;
        totf3 = (totf3 / vagas) * 100;
      
        if(tot1 > tot2 && tot1 > tot3){
            id = 1;
            totT = tot1;
        } else if (tot2 > tot1 && tot2 > tot3){
            id = 2;
            totT = tot2;
        } else if(tot3 > tot1 && tot3 > tot2) {
            id = 3;
            totT = tot3;
        }
        code = 0;

    }
    

    cout << "==========================\n";
    cout << "        Estatística       \n";
    cout << "==========================\n";
    cout << "Total de candidatos para o curso[1]: " << tot1 << " com " << totf1 << "% de mulheres.\n";
    cout << "Total de candidatos para o curso[2]: " << tot2 << " com " << totf2 << "% de mulheres.\n";
    cout << "Total de candidatos para o curso[3]: " << tot3 << " com " << totf3 << "% de mulheres." << endl;
    cout << "O curso com mais candidatos é o " << id << " com " << totT << " caditados.\n";
    cout << "Total de candidatos: " << vagas << endl;


    return 0;
}

/*
50) Uma universidade deseja fazer um levantamento a respeito de seu concurso vestibular. Para cada
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