/*
Name: Dan Kimathi Mugambi 
Reg no: CT101/G/26458/25
Description: Exam eligibility 
28/09
*/
 # include <stdio.h>
 
 int main ()
 {
 int attendance; 
 int averagemarks;
 
 printf("Enter your attendance (percentage) : \n");
 scanf("%d", & attendance);
 
 printf("Enter your average marks: \n");
 scanf("%d", & averagemarks);
 if (attendance >=75  && averagemarks >=40)
 {
 printf("Eligible. \n");
 }
 else
 {
 printf("Not Eligible. \n");
 }
 return 0;
 }