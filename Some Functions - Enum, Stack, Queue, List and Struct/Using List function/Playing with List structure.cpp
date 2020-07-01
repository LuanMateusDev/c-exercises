#include <iostream>
#include <list>

using namespace std;

int main(void) {

    list <int> aula, teste; int tam = 10;
    //Creating o iterator;
    list<int>::iterator it;

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    for(int c = 0; c < tam; c++) {
        aula.push_front(c);
    }

    it = aula.begin();

    advance(it, 5);

    aula.insert(it, 0);

    aula.erase(it);

    tam = aula.size();

    cout << "Tamanho da lista: " << tam << "\n";

    //aula.sort();
    //aula.reverse();
    //aula.clear();
    aula.merge(teste);

    tam = aula.size();

    for(int c =0; c < tam; c++) {
        cout << aula.front() << "\n";
        aula.pop_front();
    }



    return 0;
}