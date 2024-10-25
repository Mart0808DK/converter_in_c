#include <stdio.h>
#include "convert_ui.h"

void display_intro()
{
    printf("Welcome to the Unit Converter Program!\n");
}

void display_main_menu()
{
    printf("Please select an option from the main menu below\n");
    printf("1. Distance\n");
    printf("2. Weight\n");
    printf("3. Temperature\n");
    printf("4. Digital Storage\n");
    printf("5. Quit\n");
}

int get_main_choice()
{
    int choice;
    scanf("%d", &choice);
    return choice;
}