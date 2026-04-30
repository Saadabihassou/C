#include <stdio.h>
#include <string.h>
#include <math.h>

// shopping cart
void shopping_cart()
{
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
    printf("You have bought: %d %s \n", quantity, item);
    printf("The total is: $%.2f", total);
}

// Madlibs game
void madlibs()
{
    char noun[50] = "";
    char verb[50] = "";
    char adjective[50] = "";
    char adverb[50] = "";

    printf("Enter a noun: ");
    fgets(noun, sizeof(noun), stdin);
    printf("Enter a verb: ");
    fgets(verb, sizeof(verb), stdin);
    printf("Enter an adjective: ");
    fgets(adjective, sizeof(adjective), stdin);
    printf("Enter an adverb: ");
    fgets(adverb, sizeof(adverb), stdin);
    printf("The %s %s %s %s.", adjective, noun, verb, adverb);
}

// interest calculator
void interest_calc()
{
    double principal, rate, monthly_contribution;
    int length;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter the time in years: ");
    scanf("%d", &length);
    printf("Enter the monthly contribution: ");
    scanf("%lf", &monthly_contribution);

    // Convert annual rate to monthly and percentage to decimal
    double monthly_rate = (rate / 100) / 12;
    int total_months = length * 12;
    double total_amount = principal;

    for (int i = 0; i < total_months; i++)
    {
        total_amount += monthly_contribution;        // Add monthly contribution
        total_amount += total_amount * monthly_rate; // Add interest
    }
    printf("Total amount after %d years: $%.2lf\n", length, total_amount);
}

//  weight converter
void weight_converter()
{
    printf("Welcome to our weight converter! choose option: \n");
    printf("1. kg to lbs \n");
    printf("2. lbs to kg \n");

    int choice;
    printf("Enter Choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        float weight_kg;
        float weight_lbs;
        printf("Enter weight (in kg): ");
        scanf("%f", &weight_kg);

        float result = weight_kg * 2.20462;
        printf("%.2f kilograms is %.2f lbs", weight_kg, result);
    }
    else if (choice == 2)
    {
        float weight_kg;
        float weight_lbs;

        printf("Enter weight (in lbs): ");
        scanf("%f", &weight_lbs);

        float result = weight_lbs * 0.453592;
        printf("%.2f pounds is %.2f kg", weight_lbs, result);
    }
    else {
        printf("Please enter correct option!");
    }
}

void 

int main()
{
    // shopping_cart();
    // madlibs();
    // interest_calc();
    // weight_converter();
    return 0;
}