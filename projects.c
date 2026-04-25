#include <stdio.h>
#include <string.h>

// shopping cart
void shopping_cart() {
    char item[50] = "";
    float price;
    int quantity;
    float total;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    printf("What is the price for each?: ");
    scanf("%f", &price);
    printf("How many would you like?: ");
    scanf("%i", &quantity);

    total = quantity * price;
    printf("You have bought: %d %c \n", quantity, item);
    printf("The total is: $%.2f", total);
}

// Madlibs game
void madlibs() {
    
}


int main () {
    shopping_cart();
    return 0;
}