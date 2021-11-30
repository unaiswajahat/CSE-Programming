#include <stdio.h>
#include <stdlib.h>

int main()
{ char str[100];
   int len;
   
    printf("\nEnter the string : ");
    gets(str);
    
    len = strlen(str);
    
    printf("\nLength of given string : %d", len);

    return 0;
}
