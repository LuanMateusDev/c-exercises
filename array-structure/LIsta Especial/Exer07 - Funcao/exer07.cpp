#include <iostream>

using namespace std;

int verificaPrimo(int num, int result, int tot){
  if(num <= 1){
    cout << "Não é primo!"; 
  } else {
        for(int c = 1; c <= num; c++){
            result = num % c;
            if(result == 0)
                tot++; 
        }
         if(tot == 2)
            cout << "Número é primo\n";
        else 
            cout << "Não é primo\n";
    }
}

int main(void){
  int num, result = 0, tot = 0;

  cout << "Digite um número: ";
  cin >> num;

  verificaPrimo(num, result, tot);

  return 0;

}

/*
7. Crie uma função que verifique se um número é primo.
*/
