#include <iostream>

using namespace std;

int main(){

    string sexo;
    int numeroO,idMaior, totP, tot = 0,totPecas = 0, totA_M = 0, totB_M = 0, totC_M = 0, totA_F = 0, totB_F = 0, totC_F = 0, maior = 0;
    double salario, porcemS_3 = 0, porcemS_5 = 0, totG = 0, A_M, B_M, C_M, A_F, B_F, C_F;

   while(numeroO != 0){
       tot += 1;
       cout << "\nInforme o número do operário: ";
       cin >> numeroO;
       cout << "Informe o número de peças fábricadas por mês: ";
       cin >> totP;
       cout << "Informe o sexo[M/F]: ";
       cin >> sexo;

        totPecas += totP;
        porcemS_3 = ( 3 * 1000) / 100;
        porcemS_5 = (5 * 1000) / 100;

        //Sálario
        if(totP > 30 && totP < 36){
            salario = porcemS_3 * totP;
        } else if (totP > 35){
            salario = porcemS_5 * totP;
        } else {
            salario = 1000;
        }

        //Total de peças feitas por M de cada classe.
        if(sexo == "M" && totP > 30 && totP < 36){
             totB_M += 1; 
        } else if (sexo == "M" && totP > 35){
             totC_M += 1;
        } else {
             totA_M += 1;
        }

        //Total de peças feitas por F de cada classe.
        if(sexo == "F" && totP > 30 && totP < 36){
             totB_F += 1; 
        } else if (sexo == "F" && totP > 35){
             totC_F += 1;
        } else {
             totA_F += 1;
        }
           
        totG += salario;

        if(salario > maior){
            idMaior = numeroO;
            maior = salario;
        }

       cout << "===========\n";
       cout << "  Status\n";
       cout << "===========\n";
       cout << "\nNúmero do Operário: " << numeroO;
       cout << "\nSálario do operário[" << numeroO << "] R$: " << salario;
   }

   //Homens
    if(totA_M == 0){
        A_M = 0;
    }else {
        A_M = totPecas / totA_M;
    }
    if(totB_M == 0){
        B_M = 0;
    } else {
        B_M = totPecas / totB_M;
    }
    if(totC_M == 0){
        C_M = 0;
    }else{
        C_M = totPecas / totC_M;
    }
    //Mulheres
    if(totA_F == 0){
        A_F = 0;
    }else {
        A_F = totPecas / totA_F;
    }
    if(totB_F == 0){
        B_F = 0;
    } else {
        B_F = totPecas / totB_F;
    }
    if(totC_F == 0){
        C_F = 0;
    }else{
        C_F = totPecas / totC_F;
    }

    cout << "\n====================\n";
    cout << "  RESULTADO GERAL \n";
    cout << "\====================\n";
    cout << "\nTotal da folha mensal de pagamento da fábrica R$: " << totG;
    cout << "\nTotal de peças fabricadas por mês: " << totPecas;
    cout << "\nMédia de peças fabricadas pelos homens na Classe A: " << A_M;
    cout << "\nMédia de peças fabricadas pelos homens na Classe B: " << B_M;
    cout << "\nMédia de peças fabricadas pelos homens na Classe C: " << C_M;
    cout << "\nMédia de peças fabricadas pelas mulheres na Classe A: " << A_F;
    cout << "\nMédia de peças fabricadas pelas mulheres na Classe B: " << B_F;
    cout << "\nMédia de peças fabricadas pelas mulheres na Classe C: " << C_F;
    cout << "\nNúmero de operário ou operária de maior salário: " << idMaior;
    cout << "\n_\n";

    return 0;
}

/*
65) Numa fábrica trabalham homens e mulheres divididos em três classes:
 os que fazem até 30 peças por mês;
 os que fazem de 31 a 35 peças por mês;14

os que fazem mais de 35 peças por mês;
A classe A recebe salário-mínimo. A classe B recebe salário-mínimo e mais 3% do salário-
mínimo por peça, acima das 30 iniciais. A classe C recebe salário-mínimo e mais 5% do
salário-mínimo por peça acima das 30 iniciais. Fazer um algoritmo que:
Leia várias linhas, contendo cada uma:
 O número do operário;
 O número de peças fabricadas por mês;
 O sexo do operário;
Calcule e escreva:
a) O salário de cada operário;
b) O total da folha mensal de pagamento da fábrica;
c) O número total de peças fabricadas por mês;
d) A média de peças fabricadas pelos homens em cada classe;
e) A média de peças fabricadas pelas mulheres em cada classe;
f)
O número do operário ou operária de maior salário (não existe empate).
Observação: a última linha, que servirá de flag, terá o número do operário igual a zero.
*/