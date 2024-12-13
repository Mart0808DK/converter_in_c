#include <stdio.h>
#include "numbers_ui.h"

void display_numbers_menu()
{
    printf("Please select an option from the numbers menu below\n");
    printf("a. Decimal to Binary\n");
    printf("A. Binary to Decimal\n");
    printf("b. Hexadecimal to Decimal\n");
    printf("B. Decimal to Hexadecimal\n");
    printf("C. Octal to Decimal\n");
    printf("c. Decimal to Octal\n");
    printf("q. Quit to menu\n");
}

float get_numbers_value()
{
    float value;
    scanf("%f", &value);
    return value;
}

void get_numbers_hexadecimal(char *hexadecimal)
{
    scanf("%s", hexadecimal);
}

char get_numbers_choice()
{
    char choice;
    scanf(" %c", &choice);
    return choice;
}