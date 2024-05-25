#include <stdio.h>
int main(){
    FILE *ptr=NULL;

    // fgetc
    // ptr=fopen("text2.txt","r");
    // char c=fgetc(ptr);
    // printf("the character in file : %c\n",c);

    //  c=fgetc(ptr);
    // printf("the character in file : %c\n",c);


// fgets
    // char string[44];
    // fgets(string,5,ptr);
    // printf("the selected line : %s",string);

    ptr=fopen("text2.txt","a+");

    // fputc

    // fputc('q',ptr);

    // fputs
    fputs("Hello there!",ptr);


    fclose(ptr);
    return 0;
}