#include <stdio.h>
#include "distance_ui.h"

void display_distance_menu()
{
    printf("Please select an option from the distance menu below\n");
    printf("m. Kilometers to Miles\n");
    printf("k. Miles to Kilometers\n");
    printf("q. Quit to menu\n");
}

float get_distance_value()
{
    float value;
    scanf("%f", &value);
    return value;
}

char get_distance_choice()
{
    char choice;
    scanf(" %c", &choice);
    return choice;
}