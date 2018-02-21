#include <ctype.h>
#include <stdio.h>
#include <string.h>





int main(void){
    char s[] = "azerty";
    char ss[] = "azerty";
    char sss[] = "azerty azerty";
    char b[64]={0};
    char c[64]={0};
    char ch[1]={0};
    char *p;
    char arr[64] = {0};
    char arr2[64] = {0};
    int a;
    puts("enter string for concatenation");
    gets(b);
    while (getc(stdin)!='\n');
    puts("enter a string for 5th question");
    gets(c);
    while (getc(stdin)!='\n');
    puts("\n enter one character for search");
    gets(ch);
    a = strcmp(s,ss);
    if (a == 0){
        printf("starting strings are the same\n");
    }
    else {
        printf("starting strings are different\n");
    }
    strcat(b,s);
    printf("contatenated string is %s\n",b);
    a = strlen(b);
    printf("length of contatenated string is %d characters\n",a);
    if (strstr(b,c)== NULL){
        puts("no same string found");
    }
    else {
        puts("same string found");
    }
    char *e;

    for(a=0;a<strlen(b);a++){
        *e = b[a];
        if (strstr(e,&ch[0])== NULL){
            strcat(arr,e);
        }

    }
    puts(arr);
    printf("modified function is %d characters long\n",strlen(arr));
    char k;
    for(a=0;a<strlen(sss);a++){
            k = sss[a];
                printf("\v");  //the \v isn't displaying anything on my compiler but when i change it to \n it shows my code is working
            if (isspace(k)){
            }
            else{
                printf("%s",&k);
            }

    }

}


