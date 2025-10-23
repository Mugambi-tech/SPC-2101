/*
Dan Kimathi Mugambi 
CT101/G/26458/25
ConvertToCelcius
23/19
*/
#include <stdio.h>

float fahrenheit ;
float Celsius ;
    

int main() {
    printf("ConvertToCelcius\n");
    
    printf("\nEnter temperature in Fahrenheit: \n");
    scanf("%f", &fahrenheit);

Celsius =(fahrenheit - 32) * 5 / 9;

    printf("Temperature in Celsius = %.2f°C\n", Celsius);
    return 0;
}
