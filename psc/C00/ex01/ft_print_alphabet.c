/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:18:52 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:04:39 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h> // Needed for the write function to print characters

// This function prints all lowercase letters from 'a' to 'z' to the screen
void	ft_print_alphabet(void) // No input arguments
{
    // Declare a variable to store the current letter
	char	a;

    // Start with the letter 'a'
	a = 'a';
    // Loop as long as 'a' is less than or equal to 'z'
	while (a <= 'z')
	{
        // Print the current letter to the screen
		write(1, &a, 1);
        // Move to the next letter in the alphabet
		a++;
	}
}

/*
// Example usage:
// void	main(void)
// {
//     ft_print_alphabet(); // This will print the alphabet
//     return (0);
// }
*/