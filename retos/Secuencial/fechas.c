#include <stdio.h> // Biblioteca con funciones para ingresar y mostrar datos.
#include <stdlib.h>

// Consigna
/*Se ingresa un n�mero entero que representa una fecha con formato (ddmmaa). Se pide transformarlo a un
n�mero con formato (aammdd).
Ejemplo
 150424 -> 240415*/

int main()
{
    int year, day, month, fecha;

    printf("Dame una fecha papi:");
    scanf("%d", &fecha);

    day = (fecha/10000);
    month = (fecha-(day*10000))/100;
    year = (fecha-(month*100))-day*10000;

    printf("Dia: %d\n", day);
    printf("Mes: %d\n", month);
    printf("Anio: %d\n", year);
    printf("Nueva fecha : %d\n", (year*10000)+(month*100)+(day));
    return 0;
}
