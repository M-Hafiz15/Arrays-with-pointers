#include <stdio.h>

float itemTotal(int quantity, float price);

int main() {
    char customerName[50];
    char itemName[50];
    int numItems, quantity;
    float price, total = 0.0;

    printf("Enter customer name: ");
    scanf("%s", customerName);

    printf("Enter number of items purchased: ");
    scanf("%d", &numItems);

    for (int i = 1; i <= numItems; i++) {
        printf("\nEnter name of item %d: ", i);
        scanf("%s", itemName);

        printf("Enter quantity of %s: ", itemName);
        scanf("%d", &quantity);

        printf("Enter price per unit of %s: ", itemName);
        scanf("%f", &price);

        total += itemTotal(quantity, price);
    }

    printf("\n          \n");
    printf("Customer Name: %s\n", customerName);
    printf("Total Bill: Rs. %.2f\n", total);
    printf("\n");

    return 0;
}


float itemTotal(int quantity, float price) {
    return quantity * price;
}
