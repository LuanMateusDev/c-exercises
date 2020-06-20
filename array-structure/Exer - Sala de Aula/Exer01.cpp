#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    int c, ve[7] = {0,1,1,2,2,5,6};
    string ca[7] = {"b","segunda","terça","quarta","b","sexta","sabádo"};

    for(c = 1; c <= 6; c+=2){
        cout << "\n" << ca[ve[c]];
    }
    
    cout << "\n" << ca[ve[ve[3]]];
    cout << "\n\n"; 

    return 0;
}