#include <iostream>
#include  <cstring>

using namespace std;

int fibonacci (int n);

int main(void) {

    int value, size;

    cout << "Digite quantos elementos o fibonacci terá: ";
    cin >> value;

    fibonacci(value);

    cout << "\nFibonacci -> ";
    for(int c = 0; c < value; c++) {
        cout << fibonacci(c + 1) << " ";
    }
    cout << "\n\n";

    return 0;
}

int fibonacci (int n) {

    if(n == 1 || n ==2)
        return 1;
    else              
        return fibonacci(n-1) + fibonacci(n-2);
}