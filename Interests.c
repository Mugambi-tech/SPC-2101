/*Mugambi Kimathi Dan 
ct101/g/26458/25
Calculating  the simple interest and the compound interest 
23/9
*/
#include<stdio.h>
#include <math.h> //required for pow
int main()
{
//declaration 
double principal, time, rate, simpleinterest, compoundinterest ;
int numberofcompoundingayear;

//prompting the user to enter principal,time, rate, number of compounding a year

printf("Enter the principal amount: \n");
scanf("%lf",& principal);

printf("Enter time (Years): \n");
scanf("%lf",&time);

printf("Enter the rate (percentage): \n");
scanf("%lf",&rate);

printf("Enter the number of compounding a year: \n");
scanf("%d", & numberofcompoundingayear);

//simple interest calculation 
simpleinterest =principal*time * rate/100 ;
//compound interest calculation 
compoundinterest= principal* pow((1+ rate/(100.0*numberofcompoundingayear)),numberofcompoundingayear*time) -principal;

//output
printf("The simple interest is Ksh  %.2f \n",simpleinterest);
printf("The compound interest is Ksh %.2f \n",compoundinterest);
return 0;
}