#include <stdio.h>
#include <stdlib.h>

int main(){
    int chars,i=0;
    char*ptr;
    while(i<3){
        printf("Enter number of characters in Employee Id : ");
        scanf("%d",&chars);
        ptr=(char*)malloc((chars+1)*sizeof(char));
        printf("Enter ur emplyee id");
        scanf("%s",ptr);
        printf("Your Emplyee id is : %s\n",ptr);
        free(ptr);
        i=i+1;
    }
}