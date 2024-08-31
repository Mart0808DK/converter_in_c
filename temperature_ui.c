#include <stdio.h>
#include "temperature_ui.h"

void display_temperature_menu()
{
    printf("Please select an option from the temperature menu below\n");
    printf("f. Fahrenheit to Celsius\n");
    printf("c. Celsius to Fahrenheit\n");
    printf("q. Quit to menu\n");
}

float get_temperature_value()
{
    float value;
    scanf("%f", &value);
    return value;
}

char get_temperature_choice()
{
    char choice;
    scanf(" %c", &choice);
    return choice;
}