#include <stdio.h>

void display_digital_storage_menu()
{
    printf("Please select an option from the digital storage menu below\n");
    printf("a. Bytes to Megabytes\n");
    printf("A. Megabytes to Bytes\n");
    printf("b. Bytes to Gigabytes\n");
    printf("B. Gigabytes to Bytes\n");
    printf("c. Bytes to Bits\n");
    printf("C. Bits to Bytes\n");
    printf("D. Megabytes to Gigabytes\n");
    printf("d. Gigabytes to Terabytes\n");
    printf("q. Quit to menu\n");
}

float get_digital_storage_value()
{
    float value;
    scanf("%f", &value);
    return value;
}

char get_digital_storage_choice()
{
    char choice;
    scanf(" %c", &choice);
    return choice;
}