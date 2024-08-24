#include <stdio.h>


int main()
{
    int precio, cantidad, total;

    printf("Ingrese el precio: ");
    scanf("%d", &precio);

    printf("Ingrese la cantidad: ");
    scanf("%d", &cantidad);

    total = precio*cantidad;

    (total<=0)? printf("Ocurrio un error"):printf("El total es: %d$",total);


    /* CONDICIONAL REDUCIDO */

    /* ABRIR

    // Se utiliza en los casos en que hay solo una condicion verdadero y una falsa.

    // Ejemplo:
    int num1, num2, resultado;

    printf("Un numero: ");
    scanf("%d", &num1);

    printf("Otro numero: ");
    scanf("%d", &num2);

    resultado = (num1>=num2)?num1-num2:num1+num2;

    printf("El resultado es: %d\n",resultado);

    int v = 1;
    int f = 0;

    (v)?printf("ES VERDADERA"):printf("ES FALSO");

    (f)?printf("ES VERDADERA"):printf("ES FALSO\n");
    */

    /* TIPO DE TRIANGULO */

    /*ABRIR
    int lado1, lado2, lado3;

    printf("Ingrese el valor del primer lado: ");
    scanf("%d", &lado1);

    printf("Ingrese el valor del segundo lado: ");
    scanf("%d", &lado2);

    printf("Ingrese el valor del tercer lado: ");
    scanf("%d", &lado3);

    if(lado1==lado2 && lado2==lado3 && lado1==lado3)
    {
        printf("\n");
        printf("EQUILATERO : TODOS SUS LADOS IGUALES.\n");
    }
    else if(lado1!=lado2 && lado2!=lado3 && lado1!=lado3)
    {
        printf("\n");
        printf("ESCALENO : TODOS SUS LADOS DISTINTOS.\n");
    }
    else
    {
        printf("\n");
        printf("ISOSCELES : TIENE DOS LADOS IGUALES.\n");
    }
    */

    /* NUMERO PAR O MULTIPLO DE 5 */

    /*ABRIR
    int num, r;

    printf("Ingrese un valor: ");
    scanf("%d", &num);

    r = num%2;

    if(r==0)
    {
        printf("PAR");
        return 0;
    }

    r = num%5;

    if(r==0)
    {
        printf("MUL-5");
        return 0;
    }
    else
    {
        printf("ni idea");
    }
    */

    /* CUAL NÜMERO ES EL MAYOR */

    /*ABRIR
    int num1, num2;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);

    printf("Ingrese otro un numero: ");
    scanf("%d", &num2);

    if(num1==num2)
    {
        printf("IGUALES.\n");
    }
    else if(num1>num2)
    {
        printf("%d es mayor que %d",num1, num2);
    }
    else
    {
        printf("%d es mayor que %d",num2, num1);
    }
    */

    /* PRUEBITAS */

    /*ABRIR
    // En C el 1 cuenta como True y 0 como False 0
    int verdadero = 1;
    int falso = 0;
    int num = 2;
    int modulo;

    modulo = num % num;// El resultado es igual a cero. C lo interpreta como falso

    if(verdadero)
    {
        printf("Este msj nunca sera impreso en pantalla.");
    }
    else
    {
        printf("HOlA");
    }
    */
    return 0;
}
