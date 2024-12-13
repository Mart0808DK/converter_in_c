#include <stdio.h>
#include "ui/distance_ui.h"

float kilometers_To_Miles(float kilometers);
float miles_To_Kilometers(float miles);

int distance_main()
{
    char choice = 'F';
    float fahr, celsius; 

    while (choice != 'q')
    {
        // vis menu
        display_distance_menu();

        // tag imod valg 
        printf("Enter your choice: ");

        switch (choice = get_distance_choice())
        {
        case 'm': // fahrenheit to celsius
            printf("Enter the distance in kilometers: ");
            fahr = get_distance_value(); 

            
            celsius = kilometers_To_Miles(fahr); 

            // print resultat
            printf("The distance in miles is: %.2f\n", celsius);
            break;

        case 'k':
            printf("Enter the distance in miles: ");
            celsius = get_distance_value(); 

            // convert to fahrenheit
            fahr = miles_To_Kilometers(celsius); 

            // print resultat
            printf("The distance in kilometers is: %.2f\n", fahr);
            break;

        case 'q':
            printf("Quitting to menu\n");
            return 0;
            break;   
        
        default:
            printf("Invalid choice the choices are m, k , q\n");
            break;
    }

    }

    return 0;

}

float kilometers_To_Miles(float kilometers)
{   
    float miles = kilometers * 0.621371;
    return miles;
}

float miles_To_Kilometers(float miles)
{
    float kilometers = miles / 0.621371;
    return kilometers;
}