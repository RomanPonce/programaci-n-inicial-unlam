#include <stdio.h>

// Consigna
/*
   Confeccionar un programa que solicite el ingreso de un número entero positivo de 4 cifras y pueda calcular
   informar la suma de sus dígitos hasta llegar a una sola cifra. Ej:2561 → 5
*/

int main()
{
    int num, uni, des, cen, mil, sum, dig_one, dig_two;

    printf("Ingrese numero de 4 digitos y positivo: ");
    scanf("%d", &num);

    mil = num/1000;
    cen = (num-(mil*1000))/100;
    des = (num-(mil*1000+cen*100))/10;
    uni = (num-(mil*1000+cen*100+des*10));

    sum = mil + cen + des + uni;

    dig_one = (sum/10);
    dig_two = sum - dig_one*10;

    printf("\n");
    printf("PRIMER SUMA: %d+%d+%d+%d\n", mil,cen,des,uni);
    printf("RESULTADO: %d\n",sum);
    printf("SEGUNDA SUMA: %d+%d\n",dig_one,dig_two);
    printf("FINAL: %d\n",dig_one+dig_two);

    return 0;
}
