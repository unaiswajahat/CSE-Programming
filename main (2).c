
#include <stdio.h>

int main()
{ 
    int inputArray[100], elementCount, index, i, j, temp;
    
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &elementCount);
    printf("Enter %d numbers \n", elementCount);
    /
     for(index = 0; index < elementCount; index++){
         scanf("%d", &inputArray)[index]);
    }
    
    
    for (i = 0; i < elementcount; i++) {
        for(j = 0; j < elementCount-i-1; j++) {
            if(inputArray[j] > inputArray[j+1]) {
                
                temp = inputArray[j];
                inputArray[j] = inputArray[j+1];
                inputArray[j+1] = temp;
          }
       }    
    }
    
    printf ("Sorted array in increasing order\n");
    
    for(index = 0; index < elementCount; index++){
        printf("%d ", inputArray[index]);
    }
    return 0;
}
