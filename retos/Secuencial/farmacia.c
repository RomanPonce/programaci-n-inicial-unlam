#include <stdio.h> // Biblioteca con funciones para ingresar y mostrar datos.
#include <stdlib.h>

// Consigna
/*
    Una farmacia vende algunos artículos sin descuento y a otros con descuento del 20%. Confeccionar un
    programa que recibiendo el precio original y un código que indica si es o no con descuento, informe el
    precio final (0 no aplica el descuento y 1 aplica el descuento).
*/

int main()
{
    int precio, descuento, precio_final;
    const char sig_peso = 36;

    printf("Ingrese el precio del producto: ");
    scanf("%d", &precio);

    printf("Aplicar descuento: si(1), no(0): ");
    scanf("%d", &descuento);

    precio_final = precio - ((precio*20)/100)*descuento;

    printf("Precio del producto: %d%c\n", precio, sig_peso);
    printf("Precio final del producto: %d%c\n", precio_final, sig_peso);

    return 0;
}
