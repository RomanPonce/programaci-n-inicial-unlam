#include <stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
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
    }

    return 0;
}
