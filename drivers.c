#include <stdio.h>
#include <string.h>


struct Driver{
    char name[43];
    int dl;
    char route[43];
    int kms;
};

int main(){
    int n;
    
    printf("No of drivers :");
    scanf("%d",&n);

    struct Driver dr[n];

    for (int i=0;i<n;i++){
        printf("Enter Driver's name: \n");
        scanf("%s",dr[i].name);
        
        printf("Enter Driver's dl: \n");
        scanf("%d",&dr[i].dl);

        printf("Enter Driver's route: \n");
        scanf("%s",dr[i].route);

        printf("Enter Driver's kms: \n");
        scanf(" %d",&dr[i].kms);
    }



    // displaying info
    printf("\n Driver Details \n");
    for (int i=0;i<n;i++){
        printf("Driver %d\n",i+1);
        printf("Name: %s\n",dr[i].name);
        printf("DL: %d\n",dr[i].dl);
        printf("Route: %s\n",dr[i].route);
        printf("Kilometres: %d\n",dr[i].kms);
        printf("\n");
    }

    return 0;
}


// #include <stdio.h>
// #include <string.h>

// struct Driver{
//     char name[43];
//     int dl;
//     char route[43];
//     int kms;
// };

// int main(){
//     int n;
//     printf("No of drivers: ");
//     scanf("%d", &n);
    
//     struct Driver drivers[n]; // Define an array of struct Driver
    
//     for (int i = 0; i < n; i++){
//         printf("Enter driver's name: ");
//         scanf("%s", drivers[i].name);
        
//         printf("Enter driver's driving license number: ");
//         scanf("%d", &drivers[i].dl);
        
//         printf("Enter driver's route: ");
//         scanf("%s", drivers[i].route);
        
//         printf("Enter driver's total kilometers driven: ");
//         scanf("%d", &drivers[i].kms);
//     }
    
//     // Displaying driver details
//     printf("\nDriver Details:\n");
//     for (int i = 0; i < n; i++){
//         printf("Driver %d\n", i + 1);
//         printf("Name: %s\n", drivers[i].name);
//         printf("Driving License: %d\n", drivers[i].dl);
//         printf("Route: %s\n", drivers[i].route);
//         printf("Kilometers: %d\n", drivers[i].kms);
//         printf("\n");
//     }
    
//     return 0;
// }
