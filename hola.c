#include <stdio.h> // Biblioteca con funciones para ingresar y mostrar datos.
#include <stdlib.h> // Biblioteca para manejo de la consola.

int main() // Función principal donde corre el programa.
{
    // Primero se declaran las variables que seran utilizadas.
    int num1, num2, suma;


    // Le pido al usuario que ingreso dos numeros
    printf("Ingrese un numero: ");
    scanf("%d", &num1);

    printf("Ingrese otro numero: ");
    scanf("%d", &num2);

    // Sumar los numeros
    suma = num1 + num2;
    printf("\n");

    // Muestro en pantalla
    printf("La suma de %d y %d es: %d\n\n", num1, num2, suma);

    // Tambien se puede hacer de este otro modo, me ahorro una variable.
    printf("La suma de %d y %d es: %d\n\n", num1, num2, num1+num2);


    system("pause"); // Se queda esperando en la pantalla hasta que toquemos una tecla.
    return 0;
}
