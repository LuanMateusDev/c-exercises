#include <stdio.h>
#include <stdlib.h>
int main()
{
    int totalcal,prato,sobremesa,bebida;
    int refeicao[4][5] = {{0,0,0,0,0},{0,180,230,250,350},{0,75,110,170,200},{0,20,70,100,65}};                                              
    printf("informe Prato:\n");
    printf("1-Vegetariano 180 cal\n2-Peixe 230 cal\n3-Frango 250 cal\n4-Carne 350 cal\n");
    scanf("%d",&prato);
    printf("informe sobremesa:\n");
    printf("1-Abacaxi 75 cal\n2-Sorvete diet 110 cal\n3-Mousse diet 170 cal\n4-Mousse de chocolate 200 cal\n");
    scanf("%d",&sobremesa);
    printf("informe Bebida:\n");
    printf("1-Cha 20 cal\n2-Suco de laranja 70 cal\n3-Suco de melao 100 cal\n4-Refrigerante diet 65 cal\n");
    scanf("%d",&bebida);  
    totalcal = refeicao[1][prato] + refeicao[2][sobremesa] + refeicao[3][bebida];
    printf("sua refeicao tem %d cal\n\n",totalcal);  
    system("pause");
    return 0;
}