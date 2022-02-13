/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2;
  printf("Enter the 1st subject marks ");
  scanf("%f",&mark1);
   
  printf("Enter the 2nd subject marks ");
  scanf("%f",&mark2);

  printf("average marks %.2f",(mark1+mark2)/2);




  
  return 0;
}

