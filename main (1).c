/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    int arr[] = {1,2,3,4,5};
    
    int length = sizeof(arr)/sizeof(arr[0]);
    
    
    printf("Original array: \n");
    for (int i= 0; i < length; i++) { 
        printf("%d ", arr[i]);
    }    

    printf("\n");
    
    printf("Array in reverse order: \n");
    
    for (int i = length-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }    
    
    return 0;
}
