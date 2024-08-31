#include <stdio.h>

int main()
{
    int i,j;
    char vocal;

    while(vocal!='a' || vocal!='e' || vocal!='i' || vocal!='o' || vocal!='u'){

        printf("Ingrese una vocal: ");
        scanf(" %c",&vocal);
        printf("\n");

        if(vocal!='a' && vocal!='e' && vocal!='i' && vocal!='o' &&vocal!='u'){
            printf("Pone una vocal pelotudo.\n");
        }


        switch(vocal){
            case 'a':   for(i=1;i<=5;i++){
                            for(j=1;j<=4;j++){
                                if(i==1 || i==3){
                                    printf("A");
                                }
                                else if((i==2 || i==4 || i==5)&& (j==2 || j==3)){
                                    printf(" ");
                                }
                                else if(i==2 && (j==1 || j==4)){
                                    printf("A");
                                }
                                else if((i==4 || i==5)&&(j==1 || j==4)){
                                    printf("A");
                                }
                            }
                        printf("\n");
                        };
                        break;

            case 'e':   for(i=1;i<=5;i++){
                            for(j=1;j<=4;j++){
                                if(i==1 || i==3 || i==5){
                                    printf("E");
                                }
                                else if((i==2 || i==4) & j==1){
                                    printf("E");
                                }
                            }
                            printf("\n");
                        };
                        break;

            case 'i':   for(i=1;i<=5;i++){
                            for(j=1;j<=4;j++){
                                if(j==1){
                                    printf("I");
                                }
                            }
                        printf("\n");
                        };
                        break;

            case 'o':   for(i=1;i<=5;i++){
                            for(j=1;j<=4;j++){
                                if(i==1 || i==5){
                                    printf("O");
                                }
                                else if((i==2||i==3||i==4)&&(j==1||j==4)){
                                    printf("O");
                                }
                                else if((i==2||i==3||i==4)&&(j==2||j==3)){
                                    printf(" ");
                                }
                            }
                        printf("\n");
                        };
                        break;

            case 'u':   for(i=1;i<=5;i++){
                            for(j=1;j<=4;j++){
                                if(i==5){
                                    printf("U");
                                }
                                else if((i==1||i==2||i==3||i==4)&&(j==1||j==4)){
                                    printf("U");
                                }
                                else if((i==1||i==2||i==3||i==4)&&(j==2||j==3)){
                                    printf(" ");
                                }
                            }
                        printf("\n");

                        }
        }
    }
    return 0;
}
