#include<stdio.h> 

int main () {
    int day;
    printf("Enter the day of the week based on a number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Thats Monday");
            break;
        case 2:
            printf("Thats Tuesday");
            break;
        case 3:
            printf("Thats Wednesday");
            break;
        case 4:
            printf("Thats Thursday");
            break;
        case 5:
            printf("Thats Friday");
            break;
        case 6:
            printf("Thats Saturday");
            break;
        case 7:
            printf("Thats Sunday");
            break;
        default:
            printf("A week has only 7 days so thats invalid");
    }
    return 0;
}
