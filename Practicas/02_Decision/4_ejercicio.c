# include <stdio.h>

int main()
{
    float venta;
    float total_venta;
    float cheque=0;
    float efectivo=0;
    float tarjeta=0;
    float total_iva;
    char metodo_pago;

    while(metodo_pago != 'f')
    {

        printf("Eligo metodo de pago o f para finalizar: ");
        scanf(" %c",&metodo_pago);

        printf("venta: ");
        scanf("%f",&venta);

        if(metodo_pago == 'c'){
            cheque += venta + ((venta*20)/100);
        }
        else if(metodo_pago == 'e'){

            efectivo += venta - ((venta*10)/100);
            printf("%f",efectivo);
        }
        else if(metodo_pago == 't'){
            tarjeta += venta + ((venta*12)/100);
        }
    }

    total_venta = tarjeta + efectivo + cheque;
    total_iva = (total_venta*21)/100;

    printf("\n");
    printf("Efectivo en Caja:                 $%2.f\n", efectivo);
    printf("Ventas con Tarjeta de Credito:    $%2.f\n", tarjeta);
    printf("Ventas con cheque:                $%2.f\n", cheque);
    printf("Total de Venta:                   $%2.f\n", total_venta);
    printf("Importe del IVA:                  $%2.f\n", total_iva);



    return 0;
}
