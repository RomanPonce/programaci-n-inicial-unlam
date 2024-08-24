#include <stdio.h>

int main()
{
    /* 5.1.1 */
    /* Abrir
    // Mostrar por pantalla los números pares comprendidos entre 100 y 500.
    int i, num;

    for(i = 100; i<= 500; i +=2)
    {
        printf("%d\n", i);
    }
    */
    /* 5.1.2 */
    /* Abrir
    // Confeccionar un programa para calcular el valor de la siguiente suma: 100 + 95 + 90 + ... + 50.

    int i, num;

    num = 0;

    for(i=100; i>=50; i-=5)
        num += i;

    printf("%d",num);
    */
    /* 5.1.3 */
    /* Abrir
    // Se ingresan 50 números enteros. Determinar el promedio de los números pares.

    int i,num, acumu,count, promedio;

    acumu = 0;
    count = 0;

    for(i=1;i<=8;i++)
    {
        printf("VUELTA %d\n", i);
        printf("Ingrese un numero: ");
        scanf("%d",&num);

        if(!(num%2))
        {
            acumu += num;
            count++;
        }
    }

    promedio = acumu/count;
    printf("El promedio de numeros pares es de: %d", promedio);
    */

    char letter;
    int i, vowel_count;

    vowel_count = 0;

    for(i=1;i<=5;i++)
    {
        printf("Ingresa un letra: ");
        scanf(" %c",&letter);

        if(letter =='a'||letter =='e'||letter =='i'||letter =='o'||letter =='u'){
            vowel_count++;
        }

    }

    printf("Sean ingresado un total de %d vocales",vowel_count);


    /* Suma de todos los numeros */
    /* Abrir
    int i, num, suma;

    suma = 0;

    for ( i = 1; i <= 5; i++)
    {
        printf("Digite un numero: ");
        scanf("%d", &num);

        suma += num;

    }

    printf("Suma de todos los numeros: %d\n", suma);
    */

    /* El mayor de 5 numeros */
    /* Abrir
    int i, num, num_mayor;

    num = 0;
    num_mayor = 0;

    for( i = 1; i <= 5; i++)
    {
        printf("Digite un numero: ");
        scanf("%d", &num);

        if(num>num_mayor)
            num_mayor = num;

    }

    printf("El mayor de los numeros ingresado %d", num_mayor);
    */
    return 0;
}
