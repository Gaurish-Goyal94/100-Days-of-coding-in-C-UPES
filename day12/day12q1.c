#include <stdio.h>

int main() {
    int days, fine;

    printf("Enter the days you were late for book return: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine. Thank you for returning on time!\n");
    } else if (days <= 5) {
        fine = days * 2;
        printf("Your fine is Rs. %d\n", fine);
    } else if (days <= 10) {
        fine = 10 + (days - 5) * 4;
        printf("Your fine is Rs. %d\n", fine);
    } else if (days <= 30) {
        fine = 30 + (days - 10) * 6;
        printf("Your fine is Rs. %d\n", fine);
    } else {
        printf("More than 30 days late: Membership Cancelled.");
    }

    return 0;
}
