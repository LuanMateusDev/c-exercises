#include <iostream>

using namespace std;

void pegaInformacao(int n[][2], string nome[], int media[]){

    for(int c = 0; c < 3; c++){
        cout << "Informe o nome do " << c << " aluno: ";
        cin >> nome[c];
        cout << "Informe o PR1 de " << nome[c] << " :";
        cin >> n[c][1];
        cout << "Informe a nota da PR2: ";
        cin >> n[c][2];
        media[c] = (n[c][1] + n[c][2]) / 2;
        cout << "-------------------------------\n";
    }
}

void mostraInformacao(int n[][2], string nome[], int M[]){

    cout << "Aluno\tNOTA1\tNOTA2\tMEDIA\t\tSITUAÇÃO\n";
    cout << "----------------------------------------\n";
    for(int c = 0; c < 3; c++){
        cout << nome[c];
        cout << "\tPR1:" << n[c][1];
        cout << "\tPR2:" << n[c][2]; 
        cout << "\tMédia:" << M[c];
        if(M[c] > 6)
            cout << "    \tStatus AP\n";
        else
            cout << "     \tStatus RP\n";
        cout << "--------------------------------------\n";
    }
}

int main(void){

    int notas[3][2], media[3], mediaD[3] = {0,0,0}, aux = 0;
    string nomes[3];

    //Pegando as informações;
    pegaInformacao(notas, nomes, media);

    //Mostrando informações;
    mostraInformacao(notas, nomes, media);


    //Cálculando a maior média;
   
    for(int c = 0; c < 3; c++){ 

    if(c != 2){
        if(media[c] < media[c + 1]){
            aux = media[c];
            media[c] = media[c + 1];
            media[c + 1] = aux;
        }
    }

    }
        
    //Mostrando as médias;
    cout << "-----------------------------------------\n";
    cout << "<-- Médias em Ordem Decrescente -->\n";
    cout << "------------------------------------------\n";
    for(int c = 0; c < 3; c++){
        cout << media[c] << "\n";
    }

    

    return 0;
}

/*
15) Repetir o exercício 5 montando a terceira matriz com os elementos das outras
duas classificados em ordem decrescente.
*/