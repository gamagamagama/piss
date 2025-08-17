/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:25:46 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:31:32 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h> // Needed for the write function to print characters

// This function prints a string to the screen, one character at a time
void	ft_putstr(char *str) // Takes a pointer to a string as input
{
    // Declare a variable for the current index
	int	i;

    // Start at the beginning of the string
	i = 0;
    // Loop through each character in the string until the end (null terminator) is reached
	while (str[i] != '\0')
	{
        // Print the current character to the screen
		write(1, &str[i], 1);
        // Move to the next character
		++i;
	}
}

/*
// Example usage:
// int main()
// {
//     char string[] = "hello WORLD mother fuckeRSdasfgag";
//     ft_putstr(string); // This will print the string
//     return(0);
// }
*/