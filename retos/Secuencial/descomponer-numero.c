#include <stdio.h> // Biblioteca con funciones para ingresar y mostrar datos.
#include <stdlib.h>
// Consigna
/*
    Se ingresa un número entero de 3 cifras. Descomponerlo en unidad, decena y centena
*/

int main()
{
    int num, uni, cen, dec;

    printf("Ingresa un numero pibe:");
    scanf("%d", &num);

    cen = (num/100)*100;
    dec = ((num-cen)/10)*10;
    uni = num-cen-dec;

    printf("%d Centenas\n", cen);
    printf("%d Decenas\n", dec);
    printf("%d Unidades\n", uni);

    return 0;
}
