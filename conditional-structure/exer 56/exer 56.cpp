#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string nome;
    int code;

    cout << "Informe o seu nome: ";
    getline(cin , nome);
    cout << "Ordem de nomes\n";
    cout << "1 - Entre A a K, 2 - Entre L a K, 3 - Ente O a Z: ";
    cin >> code;

    if (code == 1){
        cout << "Sala de prova: 101";     
    } else if (code == 2){
        cout << "Sala de prova: 102";    
    } else if (code == 3){
        cout << "Sala de prova: 103";
    } else {
        cout << "Código inválido!!";
    }
    cout << endl;



    return 0;

}

/*
56) A turma de Introdução a Programação, por ter muitos alunos, será dividida em dias
de provas. Após um estudo feito pelo coordenador, decidiu-se dividi-la em três
grupos. Fazer um algoritmo que leia o nome do aluno e indicar a sala em que ele
deverá fazer as provas, tendo em vista a tabela a seguir e sabendo-se que todas as
salas encontram no bloco F.
 A – K: sala 101
 L – N: sala 102
 O – Z: sala 103
*/