#include <stdio.h>

int main(){
    FILE *ptr=NULL;
    // reading 
    // char string[34];
    //  ptr=fopen("text.txt","r");
    // // if(ptr==NULL){
    // //     return 1;
    // // }
   
    // fscanf(ptr,"%s",string);    
    // printf("%s",string);

    char string[64]="This is ios";
    ptr=fopen("text.txt","w");
    fprintf(ptr,"%s",string);
    fclose(ptr);
    return 0;
}