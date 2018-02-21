#include <string.h>
#include <stdio.h>
#include <stdlib.h>


typedef char string[31];

int main(){
    float tps;
    int i;
    int j=0;
    int h = 0;
    int f = 0;
    int k = 0;
    int g = 0;
    char *b ;
    char *c ;
    string array[30] = {0};
    char *name[15];
    char *length[15];
    FILE *my;
    my = fopen("C:\\Users\\vggre\\Documents\\GitHub\\iax5832\\iax0583\\homework2\\081.txt","r");
    for(i = 0; i < 30; i++){
          fscanf(my, "%s", array[i]);
          printf("%s\n",array[i]);
    }

    fclose(my);

    while (*array[h] != 0 ){
         h=h+1;
    }


    printf("%d\n",h);
    for(j = 1; j < h-1; j=j+2){
        printf(" trail %d %s\n",((j+1)/2),array[j]);
    }

    for(i = 1; i < h-1; i++){

            if (i%2){
                b = array[i];
                name[i/2] = b;
                printf("%s\n",name[i/2]);
            }
            else {
                c = array[i];
                length[(i-1)/2] = c;
                printf("%s\n",length[(i-1)/2]);

            }


    }

    printf("\n\n\n\n\n\n\n");

    char  *temp;
    for (k = 0; k < (h/2) -1; k++){

        for (g = 0;g < (h/2)-2-k; g++ ){

            if (*length[g] > *length[g+1]){
                temp = length[g+1];
                length[g+1] = length[g];
                length[g] = temp;
                temp = name[g+1];
                name[g+1] = name[g];
                name[g] = temp;

            }
        }
    }

    for(i = 0; i < (h/2) -1; i++){
       printf("%s  ",name[i]);
       printf("%s km\n",length[i]);

    }

            printf("enter time in minutes\n");
            scanf("%f", &tps);




        for(i = 0; i < (h/2) -1; i++){
            char *y ;
            y = length[i] ;

            float time;
            time = atof(y)/0.083; // this is not precise beyond minutes because that's not relevant for a hike

            if (time<= tps){
                    printf ("the %s hike is doable is this time\n",name[i]);

            }




        }


return 0;
}
