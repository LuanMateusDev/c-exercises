#include <iostream>

using namespace std;

int main(){

   int c ,alunos, nota, acumulador = 0, tot7 = 0;

   cout << "========================\n";
   cout << "  ESCOLA DA FELICIDADE\n";
   cout << "========================\n";
   for (int c = 1; c <= 5 ; c++){
        cout << "\nQuantos alunos " << c << " possui a turma: ";
        cin >> alunos;

        for (int i = 1; i <= alunos; i++){

            cout << "\nDigite a nota do " << i << " aluno: ";
            cin >> nota;

            acumulador += nota;

            if (nota >7){
                tot7 += 1;
            }
        }
        cout << "=======================\n";
        cout << "         STAUS\n";
        cout << "=======================\n";
        cout << "Total de alunos na turma " << c << " com notas superior a 7 sera: " << tot7;
        tot7 = 0;
   }
        
        cout << "=======================\n";
        cout << "     MÉDIA GERAL\n";
        cout << "=======================\n";
        acumulador /= 5;
        cout << "\nMedia geral da escola sera: " << acumulador;

}