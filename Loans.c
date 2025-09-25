/*Mugambi Kimathi Dan 
ct101/g/26458/25
Bank loan offers
23/9
*/
#include<stdio.h>
int main()
{
int age;
double annualincome;

// Prompting the user to enter their age and annual income 
printf("Please enter your age: \n");
scanf("%d", & age);

printf("Please enter your annual income: \n");
scanf("%lf",& annualincome);

//Checking if user is viable for a bank loan
if(age >= 21 && annualincome >= 21000)
{
printf("Congratulations you now qualify for a loan. \n");
}
else
{
printf("Unfortunately we are unable to offer you a loan at this time.");
}

return 0;
}