#include <stdio.h>
#include <string.h>

void rev(char arr[],int n){
    for (int i=0;i<=n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        
    }
}

int main()
{
    char num[]={1,2,3,4,5,6};
    
    int n =sizeof(num)/sizeof(num[0]);
    for (int i=0;i<n;i++){
        printf("%d",num[i]);
    }
    rev(num,n);
    printf("\nafter reversing\n");
    // printing the reverse array
    for (int i=0;i<n;i++){
        printf("%d",num[i]);
    }
    return 0;
}
