/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:29:02 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:12:13 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function copies a string from 'src' to 'dest' and returns the destination pointer
char	*ft_strcpy(char *dest, char *src) // Takes two pointers to characters (strings) as input
{
    // Declare a pointer to remember the start of the destination string
	char	*asig;

    // Save the starting address of dest
	asig = dest;
    // Loop through each character in the source string until the end (null terminator)
	while (*src != '\0')
	{
        // Copy the current character from src to dest
		*dest = *src;
        // Move to the next character in dest
		dest++;
        // Move to the next character in src
		src++;
	}
    // Add the null terminator at the end of dest
	*dest = '\0';
    // Return the pointer to the start of dest
	return (asig);
}

/*
// Example usage:
// int main() {
//     const char *source = "to je dobra kokotina";
//     char destination[50];
//     ft_strcpy(destination, source); // This will copy the string from source to destination
//
//     printf("pointer addr : %p\n", &source);
//     printf("source: %s\n", source);
//     printf("destination addr : %p\n", &destination);
//     printf("destination: %s\n", destination);
//
//     return 0;
// }
*/