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
    printf("You re done!");
    

    return 0;
}





