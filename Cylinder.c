/* Mugambi Kimathi Dan
Ct101/G/26458/25
Calculation of surfacearea and volume of a cylinder 
23/9
*/

#include<stdio.h>
int main()
{
double radius;
double height; 
double pie =3.142;
double volume;
double surfacearea;
//prompting the user to enter the radius and height of the cylinder 
printf("Enter the radius of the cylinder: \n");
scanf("%lf",& radius);

printf("Enter the height of the cylinder: \n");
scanf("%lf",& height);

surfacearea= 2*pie*radius*radius +2*pie* radius* height;
volume =pie*radius*radius*height;
printf("The surface area of the cylinder is %2lf \n", surfacearea);
printf("The volume of the cylinder is %2lf", volume);
return 0;
}
    