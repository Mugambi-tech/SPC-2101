/*
Dan Kimathi Mugambi 
CT101/G/26458/25
fare_rate
23/19
*/
#include <stdio.h>

float distance ;

int total_fare;
    

int main() {
    printf("Calculatefare()\n");
    
    
    printf("Enter the distance covered (kilometres): \n");
    scanf("%f", & distance);
    
    if(distance<0){
    printf("Invalid input, distance cannot be negative.\n");
    return 1;
    }
    
    total_fare= 50 * distance;

    printf("Your Total fare is : %d. \n",total_fare);
    return 0;
}
