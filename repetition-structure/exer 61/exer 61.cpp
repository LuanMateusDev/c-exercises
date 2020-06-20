#include <iostream>

using namespace std;

int main()
{
    string resp = "S";
    int totA = 0, totR = 0, quantiA;
    double media, porcemR, n1, n2, n3;

    while (resp == "S" || resp == "s")
    {

        cout << "Quantos alunos a turma possui: ";
        cin >> quantiA;

        for (int c = 1; c <= quantiA; c++)
        {
            cout << "==================\n";
            cout << "      NOTAS\n";
            cout << "==================\n";
            cout << "Digite a primeira nota: ";
            cin >> n1;
            cout << "Digite a segunda nota: ";
            cin >> n2;
            cout << "Digite a terceira nota: ";
            cin >> n3;
            cout << "=========\n";
            cout << " STATUS\n";

            media = (n1 + n2 + n3) / 3;

            if (media >= 7)
            {
                cout << "\nAPROVADO!\n";
                totA += 1;
            }
            else
            {
                totR += 1;
                cout << "\nREPROVADO!\n";
            }
        }
        porcemR = (totR * 100) / quantiA;

        cout << "==================\n";
        cout << " RESULTADO GERAL \n";
        cout << "=================\n";
        cout << "\nTotal de alunos aprovados : " << totA;
        cout << "\nMédia da turma: " << media; 
        cout << "\nPorcentagem de reprovados: " << porcemR << "%";
        totR = 0;
        cout << "\nDeseja análisar outra turma[S/N]: ";
        cin >> resp;
    }

    return 0;
}

/*
61) Numa universidade, os alunos das turmas de informática fizeram uma prova de algoritmos. Cada
turma possuir um número de alunos. Criar um algoritmo que imprima:
 Quantidade de alunos aprovados
 Média de cada turma
 Percentual de reprovados
Considere aprovado com nota >= 7.0.
*/