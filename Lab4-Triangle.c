#include <stdio.h>

int main(void) {
  int height,i,j;
  
  printf("Enter Triangle Height: ");
  scanf("%d", &height);

  for(i = 1; i <= height; i++) 
  {
        for(j = 1; j <= i; j++) 
        {
           printf("! ");
        }
        printf("\n");
  }
  for (i = height-1; i >= 1; i--)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf ("! ");  
        }  
        printf("\n");  
    }  
  return 0;
}