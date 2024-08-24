#include <stdio.h> // Biblioteca con funciones para ingresar y mostrar datos.
#include <stdlib.h>

// Consigna
/*
    Confeccionar un programa que ingrese una medida en ‘pies’ y la exhiba convertida a yardas, pulgadas, cms.
    y mts. NOTA: 1 pie = 12 pulgadas; 1 yarda = 3 pies; 1 pulgada = 2,54 cms.
*/


int main()
{
    int pies;
    float cms;

    printf("\tIngrese una cantidad de pies:");
    scanf("%d", &pies);

    cms = pies*30.48;
    printf("\tCantidad en:\n");
    printf("\t%.2f cms\n", cms);
    printf("\t%.2f mts\n", cms/100);
    printf("\t%d pulgadas\n", pies*12);
    printf("\t%.2f yardas\n", pies/3.0);

    system("pause")
    return 0;
}
