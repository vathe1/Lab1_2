#include <stdio.h>
#include <math.h>

double x1,x2,result,delta;
unsigned int variant,i,N;


int main(){

    printf("Choose your method 1 or 2:");
    scanf("%u",&variant);

    while(variant != 1 && variant != 2){
        printf("Choose method 1 or 2:");
        scanf("%u",&variant);
    }

        //v1
    if(variant == 1){
        printf("Enter x1:");
        scanf("%lf",&x1);
        printf("Enter x2:");
        scanf("%lf",&x2);
        printf("Enter N:");
        scanf("%u",&N);
        printf("\n******************************************");
        printf("\n*  N  *     X      *      F(X)           *");
        printf("\n******************************************");
        delta = (x2-x1)/(N-1);

    for (int i = 1;i<=N;i++){
        printf("\n |%4d|%10.2f|%20.2f|\n",i,x1,result);
        printf("\n__________________________________________");
        result = 8*pow(((x1/16)-4), 3)-4*x1-12;
    if (i % 10 == 0) {
            printf("Press any key to continue\n");
            getch();
        }
        x1=x1+delta;
        }
        //v2
    }
    else {
        printf("Enter x1:");
        scanf("%lf",&x1);
        printf("Enter x2:");
        scanf("%lf",&x2);
        printf("Enter delta:");
        scanf("%lf",&delta);
        printf("\n******************************************");
        printf("\n*  N  *     X      *      F(X)           *");
        printf("\n******************************************");
    for (int i = 1;x1<=x2;i++){
        printf("\n |%4d|%10.2f|%20.2f|\n",i,x1,result);
        printf("\n__________________________________________");
        result = 8*pow(((x1/16)-4),3)-4*x1-12;
    if (i % 10 == 0) {
        printf("Press any key to continue\n");
        getch();
        }
        x1=x1+delta;
            }
        }
        return 0;
}
