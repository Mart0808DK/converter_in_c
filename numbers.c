#include <stdio.h>
#include "ui/numbers_ui.h"
#include <math.h>
#include <stdlib.h>

float decimal_To_Binary(float decimal);
float binary_To_Decimal(float binary);
float hexadecimal_To_Decimal(const char *hexadecimal);
void decimal_To_Hexadecimal(float decimal, char *hexadecimal);
float octal_To_Decimal(float octal);
float decimal_To_Octal(float decimal);

int numbers_menu()
{
    char choice = 'F';
    float decimal, binary, octal;
    char hexadecimal[20];

    while (choice != 'q')
    {
        // vis menu
        display_numbers_menu();

        // tag imod valg
        printf("Enter your choice: ");

        switch (choice = get_numbers_choice())
        {
        case 'a': // decimal to binary
            printf("Enter the decimal number: ");
            decimal = get_numbers_value();

            binary = decimal_To_Binary(decimal);

            // print resultat
            printf("------------------------------------\n");
            printf("The binary number is: %.2f\n", binary);
            printf("------------------------------------\n");
            break;

        case 'A': // binary to decimal
            printf("Enter the binary number: ");
            binary = get_numbers_value();

            decimal = binary_To_Decimal(binary);

            // print resultat
            printf("------------------------------------\n");
            printf("The decimal number is: %.2f\n", decimal);
            printf("------------------------------------\n");
            break;

        case 'b': // hexadecimal to decimal
            printf("Enter the hexadecimal number: ");
            get_numbers_hexadecimal(hexadecimal);

            decimal = hexadecimal_To_Decimal(hexadecimal);

            // print resultat
            printf("------------------------------------\n");
            printf("The decimal number is: %.2f\n", decimal);
            printf("------------------------------------\n");
            break;

        case 'B': // decimal to hexadecimal
            printf("Enter the decimal number: ");
            decimal = get_numbers_value();

            decimal_To_Hexadecimal((unsigned long)decimal, hexadecimal);

            // print resultat
            printf("------------------------------------\n");
            printf("The hexadecimal number is: %s\n", hexadecimal);
            printf("------------------------------------\n");
            break;

        case 'C': // octal to decimal
            printf("Enter the octal number: ");
            octal = get_numbers_value();

            decimal = octal_To_Decimal(octal);

            // print resultat
            printf("------------------------------------\n");
            printf("The decimal number is: %.2f\n", decimal);
            printf("------------------------------------\n");
            break;

        case 'c': // decimal to octal
            printf("Enter the decimal number: ");
            decimal = get_numbers_value();

            octal = decimal_To_Octal(decimal);

            // print resultat
            printf("------------------------------------\n");
            printf("The octal number is: %.2f\n", octal);
            printf("------------------------------------\n");
            break;
        case 'q':
            printf("Quitting to menu\n");
            return 0; // tilbage til menu
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}

float decimal_To_Binary(float decimal)
{
    float binary = 0;
    int remainder, i = 1;

    while (decimal != 0)
    {
        remainder = (int)decimal % 2;
        decimal = (int)decimal / 2;
        binary = binary + remainder * i;
        i = i * 10;
    }

    return binary;
}

float binary_To_Decimal(float binary)
{
    float decimal = 0;
    int remainder, i = 0;

    while (binary != 0)
    {
        remainder = (int)binary % 10;
        binary = (int)binary / 10;
        decimal = decimal + remainder * pow(2, i);
        i++;
    }

    return decimal;
}

float hexadecimal_To_Decimal(const char *hexadecimal)
{
    return (float)strtol(hexadecimal, NULL, 16);
}

void decimal_To_Hexadecimal(float decimal, char *hexadecimal)
{
    sprintf(hexadecimal, "%lX", (unsigned long)decimal);
}

float octal_To_Decimal(float octal)
{
    float decimal = 0;
    int i = 0, remainder;

    while (octal != 0)
    {
        remainder = (int)octal % 10;
        octal = (int)octal / 10;
        decimal = decimal + remainder * pow(8, i);
        i++;
    }

    return decimal;
}

float decimal_To_Octal(float decimal)
{
    float octal = 0;
    int i = 1, remainder;

    while (decimal != 0)
    {
        remainder = (int)decimal % 8;
        decimal = (int)decimal / 8;
        octal = octal + remainder * i;
        i = i * 10;
    }

    return octal;
}