/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter the number of rows: "); 
    scanf("%d", &rows);
    for (i = rows; i >= 1; --i) {
       for(j = 1; j <= i; ++j ) {
           printf("* ");
        }
        printf("\n");
     }     
           

    return 0;
}
