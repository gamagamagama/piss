/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:45:10 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:27:55 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself
#include <unistd.h> // Needed for the write function to print characters

// This function converts a character to its two-digit hexadecimal representation and stores it in 'hex'
char ft_converter(char x, char *hex)
{
    char *hexchar; // Pointer to hexadecimal characters

    hexchar = "0123456789abcdef"; // String containing all hexadecimal digits
    hex[0] = hexchar[(x >> 4) & 0xF]; // Get the first hex digit (high nibble)
    hex[1] = hexchar[x & 0xF];        // Get the second hex digit (low nibble)
    hex[2] = '\0';                    // Null-terminate the string
    return (0);
}

// This function prints a string, replacing non-printable characters with their hexadecimal value
void ft_putstr_non_printable(char *str)
{
    char hex1[3]; // Array to store the hex representation
    int i;        // Loop counter

    hex1[0] = '\0'; // Initialize hex1 to empty string
    hex1[1] = '\0';
    hex1[2] = '\0';
    i = 0;
    // Loop through each character in the string
    while (str[i] <= 127 && str[i] >= 1)
    {
        // If the character is non-printable (not between 32 and 126)
        if ((str[i] < 32 || str[i] > 126))
        {
            ft_converter(str[i], hex1); // Convert the character to hex
            write(1, "\\", 1);          // Print a backslash
            write(1, hex1, 2);          // Print the two-digit hex value
        }
        else
        {
            write(1, &str[i], 1); // Print the character as is
        }
        i++;
    }
}

/*
Example usage:
int main(void)
{
    char string[] = "Coucou\\ntu vas bien\\aahoj\\bcau\\emajsa\\fnazdar ?";

    ft_putstr_non_printable(string); // This will print the string, replacing non-printable characters with hex

    return (0);
}
*/