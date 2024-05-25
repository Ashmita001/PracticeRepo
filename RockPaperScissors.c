#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int generateRandomNumber(int n)
{
    // srand(time(NULL));

    return rand() % n;
}

int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
    }
    else if((char1 == 'p') && (char2 == 'r')||(char1 == 's') && (char2 == 'p')||(char1 == 'r') && (char2 == 's')){
        return 1;
    }
    // {
    //     return 1;
    // }
    // else if ((char2 == 'r') && (char1 == 'p'))
    // {
    //     return 0;
    // }
    // else if ((char1 == 's') && (char2 == 'p'))
    // {
    //     return 1;
    // }
    // else if ((char2 == 's') && (char1 == 'p'))
    // {
    //     return 0;
    // }
    // else if ((char1 == 'r') && (char2 == 's'))
    // {
    //     return 1;
    // }
    else   {
        return 0;
    }
}

int main()
{
    srand(time(NULL));

    int compScore = 0, playerScore = 0, temp;
    char compChar, playerChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the game\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Choose 1 for rock,2 for Paper and 3 for scissors\n");
        printf("Enter players choice : \n");
        scanf("%d", &temp);
        // getchar();
        playerChar = dict[temp - 1];
        printf("You choose %c\n", playerChar);

        printf("Computer's choice : \n");
        temp = generateRandomNumber(3)+1 ;
        compChar = dict[temp - 1];
        printf("computer choose %c\n", compChar);


        if(greater(compChar,playerChar)==1){
            compScore+=1;
        }
        else if(greater(compChar,playerChar)==-1){
            compScore+=1;
            playerScore+=1;
        }else{
            playerScore+=1;
        }
    }
    printf("Your score : %d\n",playerScore);
    printf("Computer score : %d",compScore);
}