#include <stdio.h>
#include "ui/convert_ui.h"
#include "ui/temperature_ui.h"
#include "ui/distance_ui.h"
#include "ui/weight_ui.h"
#include "ui/convert_ui.h"
#include "ui/digital_storage_ui.h"
#include "ui/numbers_ui.h"

int main()
{
    int choice = 0;

    // Display intro
    display_intro();

    // Display menu
    while (choice != 5)
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
            printf("Digital Storage.\n");
            digital_storage_menu();
            break;
        case 5:
            printf("Numbers\n");
            numbers_menu();
            break;
        case 6:
            printf("Quitting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}