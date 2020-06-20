#include <iostream>

using namespace std;

int converta(){

    int horas,minutos;

    cout << "Conversão de horas em minutos: ";
    cout << "Digite horas entre (1 e 24)";
    cin >> horas;

    if(horas < 1 || horas > 24){
        cout << "Error";
        return 1;
    }else{
        minutos = horas * 60;
        cout << minutos << " minutos.";
        return 0;
    } 

}

int main(){

    int retorno;

    retorno = converta();
    if(retorno == 1){
        cout << "Valor incorreto.";
    }else {
        return 0;
    }

    return 0;
}