#include <iostream>
#include <stdlib.h>
#include <cctype>

using namespace std;

int main(){

    int i, cont_Otimo=0,cont_Bom=0,cont_Regular=0, cont_Ruim=0, cont_Pessimo=0 ,totidade=0, maiorR=0, maiorO = 0,maiorP = 0, dif;

    float porcem, porcem2, porcem3,porcemtot, media = 0,idade;

    char opiniao;

    cout << "<------ Pesquisa de opnião - Cinema -------->\n";
    cout << "Nota: \n";
    cout << "A Otimo\n";
    cout << "B Bom\n";
    cout << "C Regular\n";
    cout << "D Ruim\n";
    cout << "E Pessimo\n";
   
    cout << "_\n";
    for(i = 1; i <= 10; i++){
        cout << "\nN."<< i << ":";
        cout << "Digite a sua idade: ";
        cin >> idade;
        cout << "Digite a sua opnião conforme a tabela a cima: ";
        cin >> opiniao;
        opiniao = tolower(opiniao);
        
        switch(opiniao){
            case 'a':
                cont_Otimo++;
                if(idade > maiorO){
                    maiorO = idade;
                }
                break;
            case 'b':
                cont_Bom++;
                break;
            case 'c':
                cont_Regular++;
                break;
            case 'd':
                totidade += idade;
                cont_Ruim++;
                if(idade > maiorR){
                     maiorR = idade; 
                }
                break;
            case 'e':
                cont_Pessimo++;
                if(idade > maiorP){
                    maiorP = idade;
                }   
                break;
            default:
               cout << "\nOpinião Inválida\n";               
        }
    }
        //porcentagem
        porcem = (cont_Bom * 100) / 5;
        porcem2 = (cont_Regular * 100) / 5;
        porcem3 = (cont_Pessimo * 100) / 5;
        if(porcem > porcem2){
            porcemtot = porcem - porcem2;
        } else {
            porcemtot = porcem2 - porcem;
        }
        //media
        if(cont_Ruim != 0){
            media = totidade / cont_Ruim;
        }
        //diferença - ruim
        if(maiorO == 0 || maiorR == 0){
            dif = 0;
        } else if (maiorO > maiorR){
            dif = maiorO - maiorR;
        } else {
            dif = maiorR - maiorO;
        }
        cout << "\n_\n";
        cout << "A quantidade de respostas ótimo: " << cont_Otimo << endl;
        cout << "A diferença percentual entre respostas bom e regular: " << porcemtot << "%"<< endl;
        cout << "A média de idade das pessoas que responderam ruim: " << media << endl;
        cout << "A percentagem de respostas péssimo e a maior idade que utilizou esta opção: " << porcem3 << "%" << " e a maior idade é: " << maiorP << endl;
        cout << "A diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim : " << dif << endl;

    return 0;
}




