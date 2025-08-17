/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:01:11 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:09:59 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function returns the length of a string (number of characters before the null terminator)
int	ft_strlen(char *str) // Takes a pointer to a character (string) as input
{
    // Declare a variable to count the number of characters
	int	count;

    // Start the count at 0
	count = 0;
    // Loop through each character in the string until the end (null terminator) is reached
	while (*str != '\0')
	{
        // Move to the next character
		str++;
        // Increase the count by 1
		count++;
	}
    // Return the total number of characters found
	return (count);
}

/*
// Example usage:
// int main()
// {
//     char string[] = "Ahoj svet";
//     int length = ft_strlen(string); // This will count the number of characters in the string
//     printf("counter of string: %d\n", length);
//     return 0;
// }
*/