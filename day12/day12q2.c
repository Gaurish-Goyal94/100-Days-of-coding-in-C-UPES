#include <stdio.h>

int main() {
    float units, bill;

    printf("Enter the total units consumed: ");
    scanf("%f", &units);

    
    if (units < 0) {
        printf("Invalid input! Units cannot be negative.");
    } else if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = 500 + (units - 100) * 7;
    } else if (units <= 300) {
        bill = 1200 + (units - 200) * 10;
    } else {
        bill = 2200 + (units - 300) * 12;
    }

    
    printf("Total Electricity Bill: Rs%.2f", bill);

    return 0;
}
