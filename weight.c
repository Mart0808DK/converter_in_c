#include <stdio.h>
#include "weight_ui.h"
float pounds_To_Kilograms(float pounds);
float kilograms_To_Pounds(float kilograms);

int weight_main()
{
    char choice = 'F';
    float pounds, kilograms;

    while (choice != 'q')
    {
        // vis menu
        display_weight_menu();

        // tag imod valg

        switch (choice = get_weight_choice())
        {
        case 'p': // pounds to kilograms
            printf("Enter the weight in pounds: ");
            pounds = get_weight_value();

            kilograms = pounds_To_Kilograms(pounds);

            // print resultat
            printf("The weight in kilograms is: %.2f\n", kilograms);
            break;
        case 'k':
            printf("Enter the weight in kilograms: ");
            kilograms = get_weight_value();

            // convert to fahrenheit
            pounds = kilograms_To_Pounds(kilograms);

            // print resultat
            printf("The weight in pounds is: %.2f\n", pounds);
            break;

        case 'q':
            printf("Quitting to menu\n");
            break;

        default:
            printf("Invalid choice the choices are p, k , q\n");
            break;
        }
    }

    return 0;
    
}

float pounds_To_Kilograms(float pounds)
{   
   float kilograms = pounds * 0.453592;
   return kilograms;
}

float kilograms_To_Pounds(float kilograms)
{
    float pounds = kilograms / 0.453592;
    return pounds;
}