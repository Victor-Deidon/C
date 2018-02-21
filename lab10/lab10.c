#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    float n;
    float P;
    float r;
    printf("enter years\n");
    scanf("%f",&n);
    printf("enter initial amount\n");
    scanf("%f",&P);
    printf("enter rate\n");
    scanf("%f",&r);
    int i = 0 ;
    float h = 1+ (r/100);
    float arr[] = {};
    for (i=0; i<n ; i= i+1){
        printf("\n how much do you want to add for year %d \n",i)
        scanf("%f",&m);
        P= P+m;
        printf("\n how much do you want to withdraw for year %d \n",i)
        scanf("%f",&w);
        P= P-w;
        P = P*h ;
        printf("\n year %d \n",i );
        printf("%f",P);
        arr[i] = P;


    }
    float pointandtime(j){
    printf ("\n \n \n %f",arr[j-1]);

    }
    return pointandtime(3);

    return 0 ;
}
// i don't understand what you mean by "Different compounding intervals" ,but to get
//different intervals we just have to translate n as a fraction of a year ,eg :
//quarterly = 1/4 of a year so n = 1/4
//but i dont get if we should return or ask for the intervals to the user?
//To withdraw or add nothing the user should enter 0 ,alternatively we could
//just let the user enter negative numbers to withdraw and use only one line but
// i did it in two because they are 2 separate questions.
