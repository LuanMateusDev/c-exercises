#include <iostream>
#include <list>

using namespace std;

int main(void) {

    list <string> option{"Sanduiche", "Pão com geleia", "Leite com biscoitos"};
    int code, c, erro; string chose = "Sua escolha foi: ";

    erro:
    cout << "----------------------\n";
    cout << "  <- Option list ->\n";
    cout << "----------------------\n";
    cout << "Chosen 1: Sanduiche\n";
    cout << "Chosen 2: Pão com geleia\n";
    cout << "Chosen 3: Leite com biscoitos\n";
    cout << "---------------------------\n";
    cout << "Type the code: ";
    cin >> code;

    if(code == 1){
        cout << chose << option.front() << "\n";
    } else if (code == 2) {
        cout << chose;
            for(c = 1; c <= code; c++) {
                option.pop_front();
                if(code == 2) {
                    cout << option.front() << "\n";
                    break;
                }    
            }
    } else if (code == 3) {
        cout << option.back() << "\n";
    } else {
        system("clear");
        cout << "Inexistent code!!! Try again!!\n";
        goto erro;
    }
            
    return 0;
}