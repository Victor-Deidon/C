#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void size(int* rows,int* columns);
void fill(int *rows,int *columns,int myArray[] );
void maxro(int rows,int columns,int myArray[],int d);
void sumro(int rows,int columns,int myArray[],int d);
void sortro(int rows,int columns,int myArray[]);
int main(void){
    int rows ;
    int columns ;
    int d=0;
    int myArray[]={0};
    size(&rows,&columns);
    fill(&rows,&columns,&myArray[rows*columns]);
    maxro(rows,columns,&myArray[rows*columns],d);
    sumro(rows,columns,&myArray[rows*columns],d);
    sortro(rows,columns,&myArray[rows*columns]);


return 0 ;
}
void size(int *rows,int *columns){

    *rows = 0;
    *columns =0 ;
    while(*rows<= 0) {
        printf("enter number of rows\n");
        scanf("%d", rows);

    }

    while(*columns <= 0) {
        printf("enter number of columns\n");
        scanf("%d", columns);

    }
    printf("%d rows %d columns \n",*rows,*columns);
}
void fill(int *rows,int *columns,int myArray[]){
    int h;
    int i;
    int j;
    int a = *rows;
    int b = *columns;
    for (i=1 ;i<= a*b ;i=i+b){
        for(j=1;j<=b;j++){
                printf("enter number \n");
                scanf("%d", &h);
                myArray[i+j] = h;

        }

    }
    for (i=1 ;i<= a*b ;i=i+b){
        for(j=1;j<=b;j++){
                printf("%d",myArray[i+j]);


        }
        printf("\n");
    }

}

void maxro(int rows,int columns,int myArray[],int d){

    int h;
    int i;
    int j;
    int a = rows;
    int b = columns;
      for (i=1 ;i<= a*b ;i=i+b){
        for(j=1;j<=b;j++){
                if(myArray[i+j]>d){
                    d=myArray[i+j];
                }



        }
        printf("%d\n",d);
    }

}
void sortro(int rows,int columns,int myArray[]){
    int a = rows;
    int b = columns;
    int k;
    int g;
    int i ;
    int j;
    int u;
    int temp ;
    for (k = 0; k <a*b ; k=k+b){
            for (i = k; i < b; i++){
                for (g = k;g <b-1-i; g++ ){

                    if (myArray[g] > myArray[g+1]){
                        temp = myArray[g+1];
                        myArray[g+1] = myArray[g];
                        myArray[g] = temp;
                        for (u=1 ;u<= a*b ;u=u+b){
                            for(j=1;j<=b;j++){
                                printf("%d",myArray[i+j]);

                            }
                        printf("\n");


                        }
                    }
                }
            }
    }
}
void sumro(int rows,int columns,int myArray[],int d){

    int h;
    int i;
    int j;
    int index;
    int a = rows;
    int b = columns;
    int k[a] ;
    for (i=1 ;i<=a*b ;i=i+b){
            k[i] = 0;
        for(j=1;j<=b;j++){
            k[i]=k[i]+myArray[i+j];
        }
        printf("%d\n",k[i]);
    }
    for (i=1 ;i<=a*b ;i=i+b){
            if (k[i]>d){
                d= k[i];
                index = i;

            }
    printf("%d is the max sum row\n",index);



    }


}
