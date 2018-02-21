#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void createarray(int*n);
void input(int n,int *arr[n]);
void func3();
int main(void){
    int n ;
    int arr[n] ;
    createarray(&n);
    input(n,&arr[n]);

}
void createarray(int *n){
    *n = 0;
    while (*n<2 || *n>8){
    printf("enter size of the array");
    scanf("%d",n);
    }


}
void input(int n,int *arr[n]){
    int i ;
    int h = 4445;
    for (i=0;i< n;i++){
            while (h> 4444){
                printf("enter number %d of the array",i);
                scanf("d",h);
                *arr[i] = 0;
                *arr[i] = h;
            }
    }



}
void func3(){

}
