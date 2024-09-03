#include <stdio.h>

int calulo_de_dos_numeros(int eleccion,int num1, int num2){
    int resultado;

    switch(eleccion){
        case 1: resultado=num1+num2;
                break;
        case 2: resultado=num1+num2;
                break;
        case 3: resultado=num1+num2;
                break;
        case 4: resultado=num1+num2;
                break;
    }

    return resultado;
}

int main(){
    int num1,num2;

    printf("Ingrese un numero: ");
    scanf("%d",&num1);
    printf("Ingrese otro numero: ");
    scanf("%d",&num2);

    printf("\n");
    printf("Menú de opciones\n");
    printf("---- -- --------\n");
    printf("Numero 1:%d Numero 2:%d\n",num1,num2);

    printf("1) Sumar\n");
    printf("2) Restar\n");
    printf("3) Multiplicar\n");
    printf("4) Dividir\n");
    printf("5) Ingresar nuevos numeros\n");
    printf("6) Salir\n");



    return 0;
}
