/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:21:21 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:12:45 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function copies up to 'n' characters from 'src' to 'dest' and returns the destination pointer
char	*ft_strncpy(char *dest, char *src, unsigned int n) // Takes two strings and a number as input
{
    // Declare a pointer to remember the start of the destination string
	char	*asig;

    // Save the starting address of dest
	asig = dest;
    // Copy characters from src to dest until n is 0 or end of src is reached
	while (n > 0 && *src != '\0')
	{
        // Copy the current character from src to dest
		*dest = *src;
        // Move to the next character in dest
		dest++;
        // Move to the next character in src
		src++;
        // Decrease n by 1
		n--;
	}
    // If n is still greater than 0, fill the rest of dest with null characters
	while (n > 0)
	{
        // Add a null terminator to dest
		*dest = '\0';
        // Move to the next character in dest
		dest++;
        // Decrease n by 1
		n--;
	}
    // Return the pointer to the start of dest
	return (asig);
}

/*
// Example usage:
// int main()
// {
//     char *source = "to je dobra kokotina";
//     char destination[50];
//     int n = 5;
//
//     ft_strncpy(destination, source, n); // This will copy up to n characters from source to destination
//
//     printf("pointer addr : %p\n", &source);
//     printf("source: %s\n", source);
//     printf("destination addr : %p\n", &destination);
//     printf("destination: %s\n", destination);
//     return 0;
// }
*/