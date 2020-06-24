#include <iostream>

using namespace std;

void Fibonacci(int fibo, int a = 0, int b = 1, int c = 0, int aux = 0, int meter = 1); 

int main(void) {

    int a = 0,b = 1,c, aux, fibo;
    cout << "------------------------------\n";
    cout << "<-- Recursive Fibonacci -->\n";
    cout << "------------------------------\n";
    cout << "Enter the total elements: ";
    cin >> fibo;
    fibo -= 2;

    //Starting fibonacci;
    cout << "0  1" << " ";

    //Calling the function;
    Fibonacci(fibo);

    return 0;
}

void Fibonacci(int fibo, int a, int b, int c, int aux, int meter) {

    //Calculation of fibonacci;
    aux = b;
    c = a + aux;
    a = b;
    b = c;
    //Showing the fibonacci element;
    cout << " " << b << " ";

    //Using recursion; 
    if(meter < fibo)
        Fibonacci(fibo, a, b, c, aux, ++meter);
}

