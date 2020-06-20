
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){

    int c, t1, t2, t3;
    t1 = 0;
    t2 = 1;
    cout << t1 << " ";
    cout << t2 << " ";
    c = 3;
    
    while (c <= 15){
        t3 = t1 + t2;
        cout << t3 << " ";
        t1 = t2;
        t2 = t3;
        c++;
    }

    return 0;
}
