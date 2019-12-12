#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(){
    int a[][3]={1,2,3,4,5,6,7,8,9};
    int **p=malloc(3*sizeof(int*));
    p=a;
    printf("%d %X",*(*(a+1)+1),a[0]);
}