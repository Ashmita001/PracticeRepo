#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=123;
    // void *A=&a;
    // void pointer
    // printf("value at A : %d\n",a);
    // printf("value at A : %f",*((float*)A));

    // null pointer
    // int *A=NULL;

    // printf("value at A : %d\n",*A);

    int i=3;
    int *ptr=&i;
    // int *q=p;
    // *q=5;


    // macros-> predefined functions
    printf("current file : %s\n",__FILE__);
    printf("current date : %s\n",__DATE__);
    printf("current time : %s\n",__TIME__);
    printf("current line : %d\n",__LINE__);
    printf("current stdc : %d\n",__STDC__);
    // printf("current stdc : %d\n",TIME_FORMAT_12);


    return 0;
}