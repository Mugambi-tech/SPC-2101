/*
Name: Dan Kimathi Mugambi 
Reg no: CT101/G/26458/25
Description: Water bill calculator 
28/09
*/
 #include <stdio.h>

#define RATE1 20
#define RATE2 25
#define RATE3 30

int main() {
    int units;
    float bill;

    // Prompt user
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Validate input
    if (units < 0) {
        printf("Invalid input. Units cannot be negative.\n");
         return 1;
    }

    // Calculate bill 
    if (units <= 30) {
        bill = units * RATE1;
    }
    else if (units <= 60) {
        bill = units * RATE2;
    }
    else {
        bill = units * RATE3;
    }

    // Display result
    printf("Total water bill: %.2f KSh\n", bill);

    return 0;
}
