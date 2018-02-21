#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>




void encrypt(char *mes,int k);
;
int main(void){
    char mes;
    int a;
    printf("enter message\n");
    scanf("%s",&mes);
    puts(&mes);
    int k;
    printf("enter key");
    scanf("%d",&k);
    printf("%d",k);

    printf("do you want to 1-encrypt or 2-Decrypt? 1,2"); //there is no safety f the user enters another value than expected because i believe this is beside the point of the exercise
    scanf("%d",&a);


    if (a==1){
        encrypt(&mes,k);
    }
    else if (a==2){
        encrypt(&mes,-k);
    }
    else {printf("none");}
    return 0;
}

void encrypt(char *mes,int k){
    int len = strlen(mes);
    int i;
    char *new = NULL;
    new = calloc(len + 1, sizeof(char));

    for (i = 0; i < len; i++) {
        char c = mes[i];
        int c_int = (int) c;

        if (!isalpha(c_int)) {
            new[i] = mes[i];
            continue;
        }

        if (isupper(c_int)) {
            new[i] = (((c_int - 'A') + k) % 26) + 'A';
            if (new[i] < 'A') {
                new[i] = 'Z' + 1 - ('A' - new[i]);
            }
        } else {
            new[i] = (((c_int - 'a') + k) % 26) + 'a';
            if (new[i] < 'a') {
                new[i] = 'z' + 1 - ('a' - new[i]);
            }
        }
    }


    printf("result message: %s", new);

}

