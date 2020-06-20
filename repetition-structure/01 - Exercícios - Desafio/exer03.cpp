#include <iostream>
#include <string.h>

using namespace std;

int main(){ 

    int matricula, idade, totC = 0, totM = 0, totCF = 0, totFS = 0, totMI = 0, acumulaI = 0, maior = 0, menor = 120;
    char sexo, concursado;
    double altura, media = 0;

    while(matricula != 0){
        
        cout << "<-- Tabela de informações -->\n";
        cout << "Informe a sua matrícula: ";
        cin >> matricula;
        cout << "Informe a sua idade: ";
        cin >> idade;
        cout << "Informe o seu sexo [M/F]: ";
        cin >> sexo;
        cout << "Informe a sua altura: ";
        cin >> altura;
        cout << "Informe se é concursado [S/N]: ";
        cin >> concursado;

        if(matricula != 0){

            if((concursado == 'S' || concursado == 's') && (sexo == 'F' || sexo == 'f'))
                totCF += 1;
            
            if(sexo == 'M' || sexo == 'm')
                totM += 1;
            
            if((sexo == 'M' || sexo == 'm') && (concursado == 'S' || concursado == 's')){
                if(idade > maior)
                    maior = idade;
            }

            if((sexo == 'F' || sexo == 'f') && (concursado == 'N' || concursado == 'n') && (idade > 30))
                totFS +=1;

            if(concursado == 'S' || concursado == 's')
                totC += 1;

            if(sexo == 'M' || sexo == 'm' && idade < 40){
                totMI += 1;
                acumulaI += idade;
            }
        }

    }

    if(acumulaI != 0)
    media = acumulaI / totMI;

    cout << "=============================\n";
    cout << "  <-- Resultados Gerais -->\n";
    cout << "=============================\n";
    cout << "\nTotal de funcionárias concursadas: " << totCF;
    cout << "\nTotal de funcionários masculinos: " << totM;
    cout << "\nA maior idade entre os homens concursados: " << maior;
    cout << "\nQuantidade total de mulheres com mais de 30 anos sem concurso: " << totFS;
    cout << "\nQuantidade total de concursados(as): " << totC;
    cout << "\nMédia das alturas entre os homens com menos de 40 anos: " << media;
    
       
    return 0;
}