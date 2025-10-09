/*
Name: Dan Kimathi Mugambi 
Reg no: CT101/G/26458/25
Description: Password system
09/10
*/

//pre proccessor directive
#include<stdio.h>

//variable declaration
int main(){

int password;

do{
//Prints a message asking the user to enter their password.
printf("\nEnter your password.\n");
scanf("%d",& password);
//Checks whether the entered password equals 1234
if(password==1234){
break;
}
printf("\nIncorrect password! Please try again. \n");
}
//Ends the loop. while(1) means “loop forever” until a break statement
while (1);
printf(" \nAccess Granted. \n");
printf("Welcome.");

	return 0;
}
		