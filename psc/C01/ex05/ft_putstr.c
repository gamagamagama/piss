/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:33:43 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:09:33 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h> // Needed for the write function to print characters

// This function prints a string to the screen, one character at a time
void	ft_putstr(char *str) // Takes a pointer to a character (string) as input
{
    // If the current character is not the end of the string
	if (*str != '\0')
	{
        // Print the current character to the screen
		write(1, str, 1);
        // Call the function again with the next character in the string (recursion)
		ft_putstr(str + 1);
	}
}

/*
// Example usage:
// int main() {
//     char myString[] = "Hello, World!";
//     ft_putstr(myString); // This will print the string
//     return 0;
// }
*/