#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int rows = 0;
    int columns = 0;

    while( rows<=0 || rows> 5) {
            printf("enter number of rows\n");
            scanf("%d", &rows);

    }

    while(columns>6 ||0 >=columns) {
        printf("enter number of columns\n");
        scanf("%d", &columns);
    }
    int i =0 ;
    int h ;
    int j = 0 ;
    int myArray[rows][columns];
    for (i=0 ;i< rows ;i++){
        for(j=0;j<columns;j++){

//              FOR THE RANDOM VALUES
//                myArray[i][j] = rand();

                printf("enter number \n");
                scanf("%d", &h);
                myArray[i][j] = h;
        }
    }
    for (i=0 ;i< rows ;i++){
        for(j=0;j<columns;j++){
                printf("%d",myArray[i][j]);
        }
    printf("\n");
    }
    int k=2;
    int B[rows];
    while ( rows > k){
        k++;
        int e = 0 ;
        int g = 0;
        while (columns > e-1){



            g=g + myArray[k][e];
            e++;


        }
    printf("\n %d \n",g);
    }

}
//I DONT KNOW WHY IT DEOSN T RETURN THE RIGHT SUM





