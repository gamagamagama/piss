/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:10:24 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:16:15 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function converts all uppercase letters in a string to lowercase
char	*ft_strlowcase(char *str) // Takes a pointer to a string as input
{
    // Declare a pointer to remember the start of the string
	char	*ns;

    // Save the starting address of str
	ns = str;
    // Loop through each character in the string until the end (null terminator)
	while (*str != '\0')
	{
        // If the character is an uppercase letter (ASCII 65 to 90)
		if (*str >= 65 && *str <= 90)
		{
            // Convert it to lowercase by adding 32 to its ASCII value
			*str = *str + 32;
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
//     char in[] = "ABCDEFGHIJKLMNOPQRSTUVvWXy12Z";
//
//     char *result;
//
//     result = ft_strlowcase(in); // This will convert all uppercase letters to lowercase
//     printf("result : %s\n", result);
//
//     return (0);
// }
*/