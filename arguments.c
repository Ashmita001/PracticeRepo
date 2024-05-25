#include <stdio.h>
// command line arguments

// int main(int argc, char const *argv[])
// {
//     printf("%d",argc);
//     return 0;
// }

// callback functions using fuction pointers
int sum(int a, int b){
 return a+b;
}


// Function that takes a function pointer as an argument
// and calls the pointed-to function
void executeHello(int (*fptr) (int,int)){
    printf("heloo user\n");
    printf("the sum of 5 and 9 is %d",fptr(5,9));
}
int main(){
    // Declare a function pointer and assign it to the sum function
    int (*ptr)(int,int);
    ptr=sum;


    executeHello(ptr);
}

// Function Pointer: A callback function is typically implemented using a function pointer. A function pointer is a variable that stores the address of a function.

// Passing the Function Pointer: You pass the function pointer as an argument to another function.

// Invoking the Callback: The receiving function can then invoke (or call) the callback function using the function pointer.