#include <iostream>

using namespace std;

int main()
{

    int dia1 = 0, mes1 = 0, ano1 = 0, dia2 = 0, mes2 = 0, ano2 = 0, totdias = 0, totdias2 = 0, cont = 1, totB = 0, quanto2,
        jan = 31, fev = 28, mar = 31, abri = 30, maio = 31, jun = 30, julho = 31, ago = 31, set = 30, out = 31, nov = 30, dez = 31;

    cout << "=========================\n";
    cout << "<--       Datas       -->\n";
    cout << "=========================\n";
    cout << "<-- Primeira Data -->\n";
    cout << "Informe o Dia 1: ";
    cin >> dia1;
    cout << "Informe o Mês 1: ";
    cin >> mes1;
    cout << "Informe o Ano 1: ";
    cin >> ano1;
    cout << "=========================\n";
    cout << "<-- Segunda Data -->\n";
    cout << "Informe o Dia 2: ";
    cin >> dia2;
    cout << "Informe o Mês 2: ";
    cin >> mes2;
    cout << "Informe o Ano 2: ";
    cin >> ano2;

    if (ano1 == ano2)
    {
        if (mes1 == mes2)
        {
            cout << "=======================\n";
            cout << "      RESULTADO      \n";
            cout << "=======================\n";
            cout << "Total de dias: " << (dia1 - dia2) << endl;
        }
        else
        {
            while (mes1 < mes2)
            {
                switch (mes1)
                {
                case 1:
                {
                    totdias2 += jan;
                    break;
                }
                case 2:
                {
                    if (ano1 % 4 == 0)
                    {
                        totB += 1;
                        totdias2 += 28;
                    }
                    else
                    {
                        totdias2 += 28;
                    }
                    break;
                }
                case 3:
                {
                    totdias2 += mar;
                    break;
                }
                case 4:
                {
                    totdias2 += abri;
                    break;
                }
                case 5:
                {
                    totdias2 += maio;
                    break;
                }
                case 6:
                {
                    totdias2 += jun;
                    break;
                }
                case 7:
                {
                    totdias2 += julho;
                    break;
                }
                case 8:
                {
                    totdias2 += ago;
                    break;
                }
                case 9:
                {
                    totdias2 += set;
                    break;
                }
                case 10:
                {
                    totdias2 += out;
                    break;
                }
                case 11:
                {
                    totdias2 += nov;
                    break;
                }
                case 12:
                {
                    totdias2 += dez;
                }
                }
                mes1++;
            }

            cout << "=======================\n";
            cout << "      RESULTADO      \n";
            cout << "=======================\n";
            cout << "Total de dias: " << ((totdias2 + totB) + dia2) - dia1 << endl;
        }
    }
    else
    {
        while (ano1 < ano2)
        {

            for (int c = mes1; mes1 <= 12; mes1++)
            {
                switch (mes1)
                {
                case 1:
                {
                    totdias += 31;
                    break;
                }
                case 2:
                {
                    if (ano1 % 4 == 0)
                    {
                        totB += 1;
                        totdias += 28;
                    }
                    else
                    {
                        totdias += 28;
                    }
                    break;
                }
                case 3:
                {
                    totdias += 31;
                    break;
                }
                case 4:
                {
                    totdias += 30;
                    break;
                }
                case 5:
                {
                    totdias += 31;
                    break;
                }
                case 6:
                {
                    totdias += 30;
                    break;
                }
                case 7:
                {
                    totdias += 31;
                    break;
                }
                case 8:
                {
                    totdias += 31;
                    break;
                }
                case 9:
                {
                    totdias += 30;
                    break;
                }
                case 10:
                {
                    totdias += 31;
                    break;
                }
                case 11:
                {
                    totdias += 30;
                    break;
                }
                case 12:
                {
                    totdias += 31;
                }
                }
            }
            mes1 = 1;
            ano1++;
        }

        if (ano1 == ano2)
        {
            while (cont <= mes2)
            {
                switch (cont)
                {
                case 1:
                {
                    totdias2 += jan;
                    break;
                }
                case 2:
                {
                    if (ano1 % 4 == 0)
                    {
                        totB += 1;
                        totdias2 += 28;
                    }
                    else
                    {
                        totdias2 += 28;
                    }
                    break;
                }
                case 3:
                {
                    totdias2 += mar;
                    break;
                }
                case 4:
                {
                    totdias2 += abri;
                    break;
                }
                case 5:
                {
                    totdias2 += maio;
                    break;
                }
                case 6:
                {
                    totdias2 += jun;
                    break;
                }
                case 7:
                {
                    totdias2 += julho;
                    break;
                }
                case 8:
                {
                    totdias2 += ago;
                    break;
                }
                case 9:
                {
                    totdias2 += set;
                    break;
                }
                case 10:
                {
                    totdias2 += out;
                    break;
                }
                case 11:
                {
                    totdias2 += nov;
                    break;
                }
                case 12:
                {
                    totdias2 += dez;
                }
                }
                cont++;
            }
        }

        if (mes2 == 1)
        {
            quanto2 = jan - dia2;
        }
        else if (mes2 == 2)
        {
            quanto2 = fev - dia2;
        }
        else if (mes2 == 3)
        {
            quanto2 = mar - dia2;
        }
        else if (mes2 == 4)
        {
            quanto2 = abri - dia2;
        }
        else if (mes2 == 5)
        {
            quanto2 = maio - dia2;
        }
        else if (mes2 == 6)
        {
            quanto2 = jun - dia2;
        }
        else if (mes2 == 7)
        {
            quanto2 = julho - dia2;
        }
        else if (mes2 == 8)
        {
            quanto2 = ago - dia2;
        }
        else if (mes2 == 9)
        {
            quanto2 = set - dia2;
        }
        else if (mes2 == 10)
        {
            quanto2 = out - dia2;
        }
        else if (mes2 == 11)
        {
            quanto2 = nov - dia2;
        }
        else if (mes2 == 12)
        {
            quanto2 = dez - dia2;
        }

        cout << "=======================\n";
        cout << "      RESULTADO      \n";
        cout << "=======================\n";
        cout << "Total de dias: " << ((totdias + totdias2) + totB - quanto2) - dia1 << endl;
    }

    return 0;
}
