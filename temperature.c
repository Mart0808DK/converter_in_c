#include <stdio.h>
#include "temperature_ui.h"

float celsius_To_Fahrenheit(float celsius);
float fahrenheit_To_Celsius(float fahr);

int temperature_main () 
{
    char choice = 'F';
    float fahr, celsius; 

    while (choice != 'q')
    {
        // vis menu
        display_temperature_menu();

        // tag imod valg
        printf("Enter your choice: ");

        switch (choice = get_temperature_choice())
        {
        case 'f': // fahrenheit to celsius
            printf("Enter the temperature in Fahrenheit: ");
            fahr = get_temperature_value(); 

            
            celsius = fahrenheit_To_Celsius(fahr); 

            // print resultat
            printf("The temperature in Celsius is: %.2f\n", celsius);
            break;
        case 'c': 
            printf("Enter the temperature in Celsius: ");
            celsius = get_temperature_value(); 

            // convert to fahrenheit
            fahr = celsius_To_Fahrenheit(celsius); 

            // print resultat
            printf("The temperature in Fahrenheit is: %.2f\n", fahr);
            break;
        case 'q':
            printf("Quitting to menu\n");
            break;   
        
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    
    return 0;
}

float celsius_To_Fahrenheit(float celsius)
{
    float fahrenheit = (celsius * 9.0/5.0) + 32;
    return fahrenheit;
}

float fahrenheit_To_Celsius(float fahr) 
{
    float celsius = (fahr - 32) * 5.0/9.0;
    return celsius;
}