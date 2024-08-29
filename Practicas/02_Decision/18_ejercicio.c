/*
Confeccionar un programa que permita ingresar la fecha actual (d�a, mes y a�o) y la fecha de nacimiento
de una persona (d�a, mes y a�o). Con ambos datos debe calcular la edad de dicha persona.
*/




#include <stdio.h>

int main()
{
    int actual_date, born_date, edad_anios, meses,dias;

    printf("Ingrese su fecha de nacimiento: ");
    scanf("%d",&born_date);

    printf("Ingrese la fecha de hoy: ");
    scanf("%d",&actual_date);

    edad_anios = (actual_date-born_date%100)%100;

    meses = (actual_date/100)%100-(born_date/100)%100;

    if(meses<0)
        meses = -meses;

    dias = (actual_date/10000)-(born_date/10000);

    if(dias<0)
        dias = -dias;

    printf("Su exacta edad es de %d anios con %d meses y %d dias",edad_anios,meses,dias);







    return 0;
}
