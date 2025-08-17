/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:43:42 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:05:13 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h> // Needed for the write function to print characters

// This function prints all lowercase letters from 'z' to 'a' in reverse order
void	ft_print_reverse_alphabet(void) // No input arguments
{
    // Declare a variable to store the current letter
	char	z;

    // Start with the letter 'z'
	z = 'z';
    // Loop as long as 'z' is greater than or equal to 'a'
	while (z >= 'a')
	{
        // Print the current letter to the screen
		write(1, &z, 1);
        // Move to the previous letter in the alphabet
		z--;
	}
}
