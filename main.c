/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10000],i,n,key;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elemnets in array : ");
    for(i=0; i<n; i++)
    { 
        scanf("%d",&a[i]);
    } 
     printf("Enter the key : ");
     scanf("%d", &key);
     
     for(i=0; i<n; i++)
     {
         if(a[i]==key)
         { 
                      printf("element found ");
            return 0;
         }
         
     }     
         
         

    return 0;
}
