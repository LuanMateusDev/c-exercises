#include <iostream>
#include <cstring>

using namespace std;

int main(){
    
  //Ocorrencia de um caractere na palavra ou frase.
  char nome[50];
  int i;
  int tam;
  char ch;
  cout << "Digite o nome: ";
  cin.getline(nome, 50);
  cout << "Digite uma letra: ";
  cin >> ch;
  tam = strlen(nome);
  cout << "\nO nome " << nome << " possui " << tam << " caracteres.\n";

  for (i = 0; i < tam; i++) {
    if (nome[i] == ch){
        cout << "A ocorrencia do caractere está na posição " << i << "\n";
    }
  }
  if (i == tam){
        cout << "Não existe a letra " << ch << " na string digitada.\n";
  }

  return 0;
}