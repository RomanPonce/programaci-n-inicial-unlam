#include <stdio.h>

int main()
{
    char digit;
    int count_numbers=0,count_letters=0,count_letters_capitalize=0,count_letters_minus=0,count_general=0,total;

    while(digit!='*'){

        printf("Digite un caracter: ");
        scanf(" %c",&digit);

        if(digit >= 48 && digit <= 57){
            count_numbers++;
        }
        else if(digit >= 65 && digit <= 90){
            count_letters++;
            count_letters_capitalize++;
        }
        else if(digit >= 97 && digit <= 122){
            count_letters++;
            count_letters_minus++;
        }
        else{
            count_general++;
        }
    }

    count_general -= 1;
    total = count_general + count_letters + count_numbers;

    printf("\n");
    printf("Total de caracteres ingresados:    %d\n",total);
    printf("Caracteres numericos:              %d\n",count_numbers);
    printf("Caracteres alfabeticos:            %d\n",count_letters);
    printf("Caracteres alfabeticos mayusculas: %d\n",count_letters_capitalize);
    printf("Caracteres alfabeticos minusculas: %d\n",count_letters_minus);
    printf("Otros caracteres:                  %d\n",count_general);












    /*
    int pow;

    pow = 2;

    while(pow<600){
        printf("%d\n",pow);
        pow = pow*2;
    }*/
    /*

    int i, day, month;

    i = 0;

    while(i!=1){

        printf("Digite un dia entre 1 y 31: ");
        scanf("%d",&day);

        printf("Digite un mes entre 1 y 12: ");
        scanf("%d",&month);

        if(month>12 || day > 31){
            printf("\nError. El programa detecto fechas invalidas.\nDigite las fechas otra vez\n");
        }
        else{
            printf("\nEl programa se ejecuto correctamente. Buen trabajo\n ");
            i++;
        }

    }*/





    return 0;
}
