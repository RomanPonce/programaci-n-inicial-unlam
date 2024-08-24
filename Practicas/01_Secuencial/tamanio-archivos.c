#include <stdio.h> // Biblioteca con funciones para ingresar y mostrar datos.
#include <stdlib.h>

// Consigna
/*
    Confeccionar un programa que ingrese un valor expresado en Kibibyte (KiB)1 y lo
    informe expresado en:
    TiB, GiB, MiB, con leyendas aclaratorias. (1MiB = 1024 KiB; 1GiB = 1024 MiB; 1TiB = 1024 GiB)
*/

int main()
{
    int kib, mib, gib, tib;

    // Ingresar el numero: 1073741824
    printf("Una cantidad entera de Kibibyte: ");
    scanf("%d", &kib);

    mib = kib/1024.;
    gib = mib/1024.;
    tib = gib/1024.;

    printf("%d Mib\n", mib);
    printf("%d Gib\n", gib);
    printf("%d Tib\n", tib);

    return 0;
}
