/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

//function main beginus
int main() {

  int n, i = 1, total=0;//veriable declaration

  printf("Enter your 'n' number: "); // input user's value
  scanf("%d", &n); //read integer value

  do //begin do while
  {
    total += i;
    i++;
  }while (n >= i);//end 

  printf("Sum of numbers: %d", total);//display total
  printf("\n!Thank you!\n"); //display thank you
  
  return 0;
} //end main function

