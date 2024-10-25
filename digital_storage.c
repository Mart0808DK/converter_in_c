#include <stdio.h>
#include "ui/digital_storage_ui.h"

float bytes_To_Megabytes(float bytes);
float megabytes_To_Bytes(float megabytes);
float bytes_To_Gigabytes(float bytes);
float gigabytes_To_Bytes(float gigabytes);
float bytes_To_Bits(float bytes);
float bits_To_Bytes(float bits);

int digital_storage_menu()
{
    char choice = 'F';
    float bytes, megabytes, gigabytes, bits;

    while (choice != 'q')
    {
        // vis menu
        display_digital_storage_menu();

        // tag imod valg
        printf("Enter your choice: ");

        switch (choice = get_digital_storage_choice())
        {
        case 'a': // bytes to megabytes
            printf("Enter the digital storage in bytes: ");
            bytes = get_digital_storage_value();

            megabytes = bytes_To_Megabytes(bytes);

            // print resultat
            printf("The digital storage in megabytes is: %.2f\n", megabytes);
            break;

        case 'A': // megabytes to bytes
            printf("Enter the digital storage in megabytes: ");
            megabytes = get_digital_storage_value();

            bytes = megabytes_To_Bytes(megabytes);

            // print resultat
            printf("The digital storage in bytes is: %.2f\n", bytes);
            break;

        case 'b': // bytes to gigabytes
            printf("Enter the digital storage in bytes: ");
            bytes = get_digital_storage_value();

            gigabytes = bytes_To_Gigabytes(bytes);

            // print resultat
            printf("The digital storage in gigabytes is: %.2f\n", gigabytes);
            break;

        case 'B': // gigabytes to bytes
            printf("Enter the digital storage in gigabytes: ");
            gigabytes = get_digital_storage_value();

            bytes = gigabytes_To_Bytes(gigabytes);

            // print resultat
            printf("The digital storage in bytes is: %.2f\n", bytes);
            break;

        case 'c': // bytes to bits
            printf("Enter the digital storage in bytes: ");
            bytes = get_digital_storage_value();

            // convert to bits
            bits = bytes_To_Bits(bytes);

            // print resultat
            printf("The digital storage in bits is: %.2f\n", bits);
            break;

        case 'C': // bits to bytes
            printf("Enter the digital storage in bits: ");
            bits = get_digital_storage_value();

            // convert to bytes
            bytes = bits_To_Bytes(bits);

            // print resultat
            printf("The digital storage in bytes is: %.2f\n", bytes);
            break;

        case 'q':
            printf("Quitting to menu\n");
            break;

        default:
            printf("Invalid choice the choices are a, A, b, B, c, C, q\n");
            break;
        }
    }

    return 0;
}

float bytes_To_Megabytes(float bytes)
{
    float megabytes = bytes / 1048576;
    return megabytes;
}

float megabytes_To_Bytes(float megabytes)
{
    float bytes = megabytes * 1048576;
    return bytes;
}

float bytes_To_Gigabytes(float bytes)
{
    float gigabytes = bytes / 1073741824;
    return gigabytes;
}

float gigabytes_To_Bytes(float gigabytes)
{
    float bytes = gigabytes * 1073741824;
    return bytes;
}

float bytes_To_Bits(float bytes)
{
    float bits = bytes * 8;
    return bits;
}

float bits_To_Bytes(float bits)
{
    float bytes = bits / 8;
    return bytes;
}
