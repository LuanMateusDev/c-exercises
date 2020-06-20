#include <iostream>
using namespace std;
int main(){

  int a,b,c,aux;

  cout << "Digite primeiro numero: ";
  cin >> a;
  cout << "Digite segundo numero: ";
  cin >> b;
  cout << "Digite terceiro numero: ";
  cin >> c;

  if(a < b){
        aux = a;
        a = b;
        b = aux;
        }
  if(b < c){
        aux = b;
        b = c;
        c = aux;
        }
  if(a < b){
        aux = a;
        a = b;
        b = aux;
        }
  cout << a << b << c;
}