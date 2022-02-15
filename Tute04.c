/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//function declaration
int minimum(int no1,int no2);
int maximum(int no1,int no2);
int multiply(int no1,int no2);


//bigin main function
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
} //end function main

int minimum(int no1,int no2) // minimum function
{
  if(no1 < no2)
  {
    return no1;
  }

  else
  {
    return no2;
  }

} //end function 

int maximum(int no1,int no2) // maximum function
{
  if(no1 < no2) //start if 
  {
    return no2;
  } //enf if

  else //start else
  {
    return no1;
  }// end else

} //end function 

int multiply(int no1,int no2) // multiply function
{
  return no1 * no2; //multiply no1 & no2
} //end function 