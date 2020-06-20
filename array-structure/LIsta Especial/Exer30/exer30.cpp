#include <iostream>

using namespace std;

int fibonacci(int n){

    if(n == 1) {
        cout << "1" << endl;
    } else if (n == 2) {
        cout << "1 1" << endl;
    } else {
        int a = 0;
        int b = 1;
        cout << "1";
        for(int i = 2; i <= n; i++){
            cout << a + b << " ";
            int aux = a;
            a = b;
            b = aux + b;
        }
    }


}

int main(void){

    int n;

    cout << "Informe o valor de n: ";
    cin >> n;

    for(int i = 2; i < n; i++){
        cout << fibonacci(i) << "\n";
    }
    /*for(int i = n; i > 0; i--){
        cout << fibonacci(n) << "\n";
    }
*/
    return 0;
}