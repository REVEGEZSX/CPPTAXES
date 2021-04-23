// AUTOR: STIVEN MELENDEZ
#include <stdio.h>
using namespace std;
float valorAuto, Taxes, costo, bono;
char per = '%';
int ciclo = 1;
bool on = true;
float vAF(); // se encarga de registrar el valor del Auto
float tXF(); // se encarga de definir el impuesto y lo regresa
float B(float P); // se encarga de calcular el valor del auto con el impuesto y lo regresa
int main()
{
    while (on == true)
    {
        valorAuto = vAF();
        Taxes = tXF();
        bono = B(valorAuto);
        costo = valorAuto + (valorAuto*Taxes) - bono;
        printf("\n\n\n");
        printf("*******************************\n");
        printf("*******************************\n");
        printf("    SIN IMPUESTO: $%2.f        \n", valorAuto);
        printf("      IMPUESTO:   %2.f%c       \n", Taxes*100, per);
        printf("        BONO:     $%2.f        \n", bono);
        printf("       VALOR:     $%2.f        \n", costo);
        printf("*******************************\n");
        printf("*******************************\n");
        printf("\n\n\n");
        while (ciclo == 1)
        {
            printf("PRESIONE |0| SI DESEA TERMINAR\n"); 
            printf("PRESIONE |1| SI DESEA CONTINUAR\n");
            scanf("%d", &ciclo);
            if (ciclo == 1)
            {
                on = true;
                break;
            }
            else
            {
                if (ciclo == 0)
                {
                    on = false;
                    break;
                }
                else
                {
                    printf("opcion errada! \n");
                    ciclo = 1;
                }    
            }
        }
    }
    return 0;
}
float vAF()
{
    float vAI;
    while (vAI < 1)
    {
        printf("ingrese el valor del automovil: ");
        scanf("%f", &vAI);

        if (vAI < 1)
        {
            printf("ingrese valor mayor que 0 \n\n");
        }
        
    }
    return vAI;
}

float tXF()
{
    int opcionI = 0;
    float vO = 0;
    while (opcionI < 1 || opcionI > 5)
    {   
        printf("\n");
        printf("  ******************\n");        
        printf("1 *     Europa     *\n");
        printf("2 *     Asia       *\n");
        printf("3 *     America    *\n");
        printf("4 *     Africa     *\n");
        printf("5 *     Oceania    *\n");
        printf("  ******************\n\n");
        printf("Ingrese una Opcion: ");
        scanf("%d", &opcionI);
        switch (opcionI)
        {
            case 1:
                vO = 0.15;
            break;

            case 2:
                vO = 0.35;
            break;

            case 3:
                vO = 0.25;
            break;

            case 4:
                vO = 0.20;
            break;

            case 5:
                vO = 0.30;
            break;

            default:
                printf("Ingrese una opcion correcta!");
            break;
        }
    }
    return vO;
}

float B(float P)
{
    float R;
    int flag = -1;
    while (flag != 0)
    {
        if (P >= 60*10^6)
        {
            R = P*0.07;
            flag = 0;        
        }
        else
        {
            if (P > 40*10^6 && P <= 60*10^6)
            {
                R = 5*10^6;
                flag = 0;
            }
            else
            {
                if (P <= 40*10^6 && P > 0)
                {
                    R = 3*10^6;
                    flag = 0;
                }
                else
                {
                    printf("Algo anda mal");
                    printf("Reinicie el Sistema");
                    break;
                }
            }
        }
   }
    return R;
}