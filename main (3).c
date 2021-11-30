/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
    
    {int n1=0,n2=1,n3,i,number; 
    printf("Enter the number of elements");
    scanf("%d",&number);
    printf("\n%d %d",n1,n2);//
    for(i=2;i<number;++i);
    {
      n3=n1+n2;
      printf(" %d",n3);
      n1=n2;
      n2=n3;
    }

     return 0;
    
    }
     
      
      
    

