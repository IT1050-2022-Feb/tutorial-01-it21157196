/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

//function main beginus
int main() {

  float distance, amount; //veriable declaration

  puts("");
  printf("What is your travelled Distance (km):  ");
  scanf("%f", &distance);// read float value

  if(distance <= 30) //begin if
  {
    amount = distance * 50;
  }//end if

  else if(distance > 30) //begin else if
  {
    amount = (30 * 50) + ((distance - 30) * 40);
  } // end

  printf("Your total amount is: %.2f", amount);//display amount
  printf("\n!Thank you!\n"); //display thank you
  
  return 0;
} //end main function
