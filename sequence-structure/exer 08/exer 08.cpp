#include <iostream>

using namespace std;

int main(){
    
        string nome, endereco, telefone;

        cout << "Informe o seu nome: ";
        getline(cin, nome);
        cout << "Digite o seu endereço: ";
        getline(cin, endereco);
        cout << "Digite o seu telefone: ";
        cin >> telefone;
    
        cout << "Nome: " << nome << "\n";
        cout << "Endereço: " << endereco << "\n";
        cout << "Telefone: " << telefone;
        cout << endl;
    
    return 0;    
}

/*
8) Receba nome, endereço e telefone e apresente-os.
*/