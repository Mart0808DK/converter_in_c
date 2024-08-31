#include <stdio.h>
#include "convert_ui.h"
#include "temperature_ui.h"
#include "distance_ui.h"
#include "weight_ui.h"
#include "convert_ui.h"

int main()
{
    int choice = 0;

    // Display intro
    display_intro();

    // Display menu
    while (choice != 4)
    {
        display_main_menu();
        choice = get_main_choice();
        printf("You selected: %d\n", choice);

        switch (choice)
        {
        case 1:
            printf("Distance\n");
            distance_main();
            break;
        case 2:
            printf("Weight\n");
            weight_main();
            break;
        case 3:
            printf("Temperature\n");
            temperature_main();
            break;
        case 4:
            printf("Quitting the program.\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}