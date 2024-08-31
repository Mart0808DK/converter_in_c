#include <stdio.h>
#include "weight_ui.h"

void display_weight_menu()
{
    printf("Please select an option from the weight menu below\n");
    printf("p. Pounds to Kilograms\n");
    printf("k. Kilograms to Pounds\n");
    printf("q. Quit to menu\n");
}

float get_weight_value()
{
    float value;
    scanf("%f", &value);
    return value;
}

char get_weight_choice()
{
    char choice;
    scanf(" %c", &choice);
    return choice;
}