#include <stdio.h>

int main() {
    int percentage;

    printf("Enter the percentage of the student: ");
    scanf("%d", &percentage);

    // Check if the input is a valid percentage
    if (percentage < 0 || percentage > 100) {
        printf("This percentage is not possible\n");
        return 0;
    }

    // Divide by 10 to turn ranges into single numbers (e.g., 85 / 10 = 8)
    switch (percentage / 10) {
        case 10:
            printf("This student has received A grade\n");
            break;
        case 9:
            printf("This student has received A grade\n");
            break;
        case 8:
            printf("This student has received B grade\n");
            break;
        case 7:
            printf("This student has received C grade\n");
            break;
        case 6:
            printf("This student has received D grade\n");
            break;
        default:
            printf("This student has received F grade and has failed\n");
            break;
    }

    return 0;
}
