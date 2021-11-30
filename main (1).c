/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{    
   int num;
   printf("Enter an integer: ");
   scanf("%d", &num);
  
   if (num % 2 ==0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    return 0;
}
