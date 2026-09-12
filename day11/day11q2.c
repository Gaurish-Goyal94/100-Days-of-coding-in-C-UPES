#include <stdio.h>

int main() {
    float costprice, sellingprice, amount, percentage;

    
    printf("Enter Cost Price (CP): ");
    scanf("%f", &costprice);
    
    printf("Enter Selling Price (SP): ");
    scanf("%f", &sellingprice);

    
    if (sellingprice > costprice) {
        amount = sellingprice - costprice;
        percentage = (amount / costprice) * 100;
        printf("Profit amount: %.2f", amount);
        printf("Profit percentage: %.2f", percentage);
    } 
    else if (costprice > sellingprice) {
        amount = costprice - sellingprice;
        percentage = (amount / costprice) * 100;
        printf("Loss amount: %.2f", amount);
        printf("Loss percentage: %.2f", percentage);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
