#include <stdio.h>

int main(void) {
  printf("This program is designed to give the Surface Area and Volume of a Rectangular Prism.\n");

float width, length, height, SA, V;  
  
  printf("\nPlease Enter the Length of the Prism: ");
  scanf("%f", &length);
  
  printf("Please Enter the Width of the Prism: ");
  scanf("%f", &width);
  
  printf("Please Enter the Height of the Prism: ");
  scanf("%f", &height);

  SA = 2*((length*width) + (length*height) + (width*height));
  printf("The Surface Area of the Prism is: %f m^2\n",SA);

  V = (length*width*height);
  printf("The Volume of the Prism is: %f m^3\n",V);
  return 0;
}