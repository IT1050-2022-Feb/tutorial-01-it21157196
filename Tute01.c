/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

//function main beginus
int main() {

  float mark1, mark2, average; //veriable declaration

  puts("");
  printf("Enter your frist subject mark: ");//input user marks
  scanf("%f", &mark1); //read float value

  printf("Enter your second subject mark: "); //input user marks
  scanf("%f", &mark2); //read float value

  average = (mark1 + mark2) / 2; //calculate average

  printf("Your average marks is: %.2f ", average);//display average amrks 
  printf("\n!Thank you!\n");//display thank you message

  
  return 0;
}//end main function

