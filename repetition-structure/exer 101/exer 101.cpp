#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main() {
  setlocale(LC_ALL, "Portuguese");
  char mensagem[200];

  cout << "=====================\n";
  cout << "     CRIPTOGRAFAR\n";
  cout << "=====================\n";
  cout << "Digite sua mensagem: ";
  cin.getline(mensagem, 200, '\n');
  
  for (int i = 0; i < strlen(mensagem); i++) {
    mensagem[i] = toupper(mensagem[i]);
    switch (mensagem[i]) {
    case 'A':
      mensagem[i] = 'X';
      break;
    case 'E':
      mensagem[i] = 'Y';
      break;
    case 'I':
      mensagem[i] = 'W';
      break;
    case 'O':
      mensagem[i] = 'K';
      break;
    case 'U':
      mensagem[i] = 'Z';
      break;
    default:
      break;
    }
  }
  cout << "--- Mensagem Criptografada ---\n";
  cout << "<-- " << mensagem << " -->" << "\n";
  
  return 0;
}