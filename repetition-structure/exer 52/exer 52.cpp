#include <iostream>

using namespace std;

int main(){
 
	double kwh = 0, quantikwh = 0, totalp = 0 , maior=0, menor =0 , media = 0, aux1, aux2;
	int numero, codigo, totr=0, totc=0, toti=0, tot =0 ;

	while(codigo != 0){
		tot += 1;
		cout << "Digite o preço do Kwh consumido: ";
		cin >> kwh;
		cout << "Informe o número do consumidor: ";
		cin >> numero;	
		cout << "Quantidade de Kwh consumidos durante os mês: ";
		cin >> quantikwh;
		cout << "Informe o código de consumidor\n";
		cout << "1 - residencial, 2 - comercial, 3 - industrial.\n";
		cout << "Código: ";
		cin >> codigo;

		if(codigo == 0){
			break;
		}
		
		if(tot == 1){
			maior = quantikwh;
			menor = quantikwh;
		}

		totalp = kwh * quantikwh;
		
		if(quantikwh > maior){
			maior = quantikwh;
		}
		if(quantikwh < menor){
			menor = quantikwh;
		}

		if(codigo == 1){
			totr += quantikwh;
		} else if (codigo == 2){
			totc += quantikwh;
		} else if (codigo == 3){
			toti += quantikwh;
		} else {
			cout << "Código inválido.\n";
		}
		cout << endl;

		cout << "   STATUS  \n";
		cout << "\nNúmero de consumidor: " << numero;
		cout << "\nTotal a pagar R$:" << totalp;
		cout << "\n=========================\n";
	}

	media = (totr + totc + toti) / tot;

	cout << "   RESULTADO GERAL   \n";
	cout << "Maior consumo: " << maior << endl;
	cout << "Menor consumo: " << menor << endl;
	cout << "Total de consumo - residencial: " << totr << endl;
	cout << "Total de consumo - comercial: " << totc << endl;
	cout << "Total de consumo - industrial: " << toti << endl;
	cout << "Média geral de consumo: " << media;
	cout << "\n==============================\n";

	return 0;
}