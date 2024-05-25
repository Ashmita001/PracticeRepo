#include<stdio.h>
int main(int argc, char const *argv[])
{
    float kmTomiles=0.62137119;
    float cmToinches=0.39370079;
    char a;
    printf("Enter what you want to convert:\n q:quit 1:kmTomiles  2:cmToinches");
    scanf("%c",&a);
    float input;

    

    switch (a) {
        case 'q' :
            printf("quitting...");
            goto end;
        case '1' :
            printf("enter in km ");
            scanf("%f",&input);
            printf("%.2f km =%.3f miles",input,input*kmTomiles);

            break;

        case '2':
            printf("enter in cm ");
            scanf("%f",&input);
            printf("%.2f cm = %.3f inches",input,input*cmToinches);
            break;
        default:
            printf("Nothing");
            break;
    }

    end:;

    return 0;
}
