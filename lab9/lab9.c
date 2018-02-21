#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int rows ;
    int columns;

    while(rows <= 0) {
            printf("enter number of rows\n");
            scanf("%d", &rows);

    }

    while(columns <= 0) {
        printf("enter number of columns\n");
        scanf("%d", &columns);
    }
    int i =0 ;
    int j = 0 ;
    int **myArray ;
    myArray = malloc(rows * sizeof(int *));
    for(i = 0; i < rows; i++) {
        myArray[i] = malloc(columns * sizeof(int));
    }
    int h;
    for (i=0 ;i< rows ;i++){
        for(j=0;j<columns;j++){



            printf("enter number \n");
            scanf("%d", &h);
            myArray[i][j] = h;
            printf("%d",myArray[i][j]);
        }
    }

}


int main2(void){



}

