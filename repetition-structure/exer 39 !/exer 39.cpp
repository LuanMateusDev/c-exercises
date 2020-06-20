#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");
    string nome, escolha, nome1, nome2;
    float altura, maior1 = 0, maior2 = 0 ;
    int q_m = 0, tot1 = 0, tot2 = 0;

    while(escolha != "Não" && escolha != "N" && escolha != "n"){
        q_m += 1;
        cout << "\nInforme o nome da moça: ";
        cin >> nome;
        cout << "Digite a altura: ";
        cin >> altura;
        cout << "\n__\n";

        if(maior1 == 0 && maior2 == 0){
            maior1 = altura;
            maior2 = (altura - 1);
        }

    if(q_m > 1){
        if(maior1 <= altura){
            if(maior1 >= maior2){
                maior2 = maior1;
                maior1 = altura;
            }
           
        }else if(altura >= maior2){
                if(maior2 <= maior1){
                     maior2 = altura;
                }
                   
        }

        if(maior1 == maior2){
            maior2 = altura;
        }
        
    }
        
        cout << "\nDeseja continuar? ";
        cin >> escolha;
    }
        cout << "\nA quantidade de moças é " << q_m;
        cout << "\nA primeira mais alta é " << maior1 << "m";
        cout << "\nA segunda mais alta é " << maior2 << "m " << endl;
        return 0;
}

/*
39) Fazer um algoritmo que leia e escreva o nome e a altura das moças inscritas em um concurso de
beleza. Para cada moça, existe uma linha contendo seu nome e sua altura. Calcule e escreva as
duas maiores alturas e quantas moças as possuem.
*/