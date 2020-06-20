#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

void escondePalavra(int i, string palavra[], string secreta[]) {
    for(i = 0; i < palavra[0].size(); i++) {
        secreta[0][i] = '_';
    }
}

void resultado(int i, int acertos, string palavra[], string secreta[]) {
    cout << "==================================\n";
    cout << "   <-- Hora da Verdade -->\n";
    cout << "==================================\n";
    if(acertos == palavra[0].length()) {
        cout << "-------------------------------\n";
        cout << "Palavra secreta -> ";
       for(i = 0; i < palavra[0].length(); i++) {
           cout << secreta[0][i];
       }
       cout << "\n--------------------------------\n";
       cout << "\nParabéns!! Você ganhou!\n\n";
   } else {
       cout << "-------------------------------\n";
       cout << "Palavra secreta -> ";
       for(i = 0; i < palavra[0].length(); i++) {
           cout << secreta[0][i];
       }
       cout << "\n--------------------------------\n";
       cout << "\nQue pena, talvez você tenha mais sorte na próxima vez!";   
    }
}


int main(void) {

    char letra[1];
    string secreta[1], palavra[1];
    int i = 0, chances = 6, acertos = 0;
    bool existe = false;

    cout << "-------------------------------------\n";
    cout << "      <- FORCA DA ALEGRIA -->\n";
    cout << "-------------------------------------\n";
    cout << "Informe a palavra secreta:";
    cin >> palavra[0];
    system("clear");

    escondePalavra(i, palavra, secreta);

    //Código do JOGO;
   while(chances > 0 && acertos < palavra[0].size()) {
      cout << "\nTotal de chances: " << chances << "\n\n";
    
      for(i = 0; i < palavra[0].size(); i++) {
            cout << secreta[0][i];
      }
      cout << "\n\n";
      cout << "Digite uma letra: ";
      cin >> letra[0];

      for(i = 0; i < palavra[0].length(); i++) {
           if(letra[0] == palavra[0][i]) {
               secreta[0][i] = palavra[0][i];
               acertos++;
               existe = true;
           }   
      }
      if(!existe) {
          chances--;
      }
      existe = false;    
   }
    resultado(i, acertos, palavra, secreta);
    
    return 0;
}