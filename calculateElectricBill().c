/*
Name: Dan Kimathi Mugambi 
Reg no: CT101/G/26458/25
Description: electric bill calculator
21/10
*/
 #include <stdio.h>

#define RATE1 10
#define RATE2 15
#define RATE3 20

int main() {
    int units;
    float bill;

printf("\n Calculate Electric Bill. \n");
    // Prompt user
    printf("Enter electric units consumed: ");
    scanf("%d", &units);

    // Validate input
    if (units < 0) {
        printf("Invalid input. Units cannot be negative.\n");
         return 1;
    }

    // Calculate bill 
    if (units < 100) {
        bill = units * RATE1;
    }
    else if (units <= 200) {
        bill = units * RATE2;
    }
    else {
        bill = units * RATE3;
    }

    // Display result
    printf("Total electricity bill: %.2f KSh\n", bill);

    return 0;
}