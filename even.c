// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     /* code */
//     int a;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("Even");
//         }
//     else{
//         printf("odd");
//     }    
//     return 0;
// }


#include <stdio.h>

int main()
{
    int a;
    printf("Hello world Ashmita\n");
    printf("enter a number between 1-6: \n");
    scanf("%d",a);
    switch (a)
    {
    case 1:
        printf("Monday\n");        
        break;
    case 2:
        printf("tuesday\n");        
        break;
    case 3:
        printf("wednesday\n");        
        break;
    case 4:
        printf("thursday\n");        
        break;
    case 5:
        printf("friday\n");        
        break;
    case 6:
        printf("saturday\n");        
        break;
    
    default:
        printf("Sunday\n");
        
    }

    

    return 0;
}