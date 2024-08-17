#include <stdio.h> // Biblioteca con funciones para ingresar y mostrar datos.
#include <stdlib.h>
#define PI 3.14159

// Consigna
/*
    Confeccionar un programa que solicite el ingreso del valor del radio (r) de un círculo y con dicho
     valor calcule la superficie del círculo, la longitud de la circunferencia (perímetro) y el volumen de la esfera.
        𝑆𝑢𝑝𝑒𝑟𝑓𝑖𝑐𝑖𝑒 = 𝜋𝑟2
        𝑃𝑒𝑟í𝑚𝑒𝑡𝑟𝑜 = 2𝜋𝑟
        𝑉𝑜𝑙ú𝑚𝑒𝑛 = 4
        3 𝜋𝑟3
*/

int main()
{
    int r;
    float super, peri, vol;
    printf("Ingrese el radio del circulo:");
    scanf("%d", &r);

    super = PI*r*r;
    peri = 2*PI*r;
    vol = (4*PI*r*r*r)/3;

    printf("La superficie es: %.2f\n",super);
    printf("El perimetro es: %.2f\n",peri);
    printf("El volumen es: %.2f\n",vol);

    return 0;
}
