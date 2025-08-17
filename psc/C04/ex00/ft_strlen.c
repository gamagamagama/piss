/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:07:11 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:31:02 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function returns the length of a string (number of characters before the null terminator)
int	ft_strlen(char *str) // Takes a pointer to a string as input
{
    // Declare a variable to count the number of characters
	int	i;

    // Start the count at 0
	i = 0;
    // Loop through each character in the string until the end (null terminator) is reached
	while (str[i] != '\0')
	{
        // Move to the next character and increase the count by 1
		++i;
	}
    // Return the total number of characters found
	return (i);
}

/*
// Example usage:
// int main()
// {
//     int x;
//     char string[] = "hello WORLD mother fuckeRS";
//     x = ft_strlen(string); // This will count the number of characters in the string
//     printf("%d", x);
//     return(0);
// }
*/