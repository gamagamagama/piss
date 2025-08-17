/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:12:27 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:15:48 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function converts all lowercase letters in a string to uppercase
char	*ft_strupcase(char *str) // Takes a pointer to a string as input
{
    // Declare a pointer to remember the start of the string
	char	*ns;

    // Save the starting address of str
	ns = str;
    // Loop through each character in the string until the end (null terminator)
	while (*str != '\0')
	{
        // If the character is a lowercase letter (ASCII 97 to 122)
		if (*str >= 97 && *str <= 122)
		{
            // Convert it to uppercase by subtracting 32 from its ASCII value
			*str = *str - 32;
		}
        // Move to the next character
		str++;
	}
    // Return the pointer to the start of the string
	return (ns);
}

/*
// Example usage:
// int main()
// {
//     char in[] = "abcdefghijklmnop@qrdtUuvWwxyz";
//
//     char *result;
//
//     result = ft_strupcase(in); // This will convert all lowercase letters to uppercase
//     printf("result : %s\n", result);
//
//     return (0);
// }
*/
