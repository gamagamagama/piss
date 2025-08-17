/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:49:57 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:38:45 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


// Include the library for write function (used to print characters to the screen)
#include <unistd.h>


// The main function: entry point of the program
// argc: number of command-line arguments
// argv: array of strings (each argument)
int main(int argc, char **argv)
{
	// Declare variables: 'i' for argument index, 'j' for character index
	int i;
	int j;

	// Start 'i' at the last argument (excluding the program name)
	i = argc - 1;
	// 'j' will be used inside the loop
	j = 0;

	// Loop through each argument in reverse order (except the program name)
	while (i >= 1)
	{
		// Start at the first character of the current argument
		j = 0;
		// Loop through each character in the argument string
		while (argv[i][j])
		{
			// Write the character to the screen
			write(1, &argv[i][j], 1);
			// Move to the next character
			j++;
		}
		// After printing the argument, print a newline character
		write(1, "\n", 1);
		// Move to the previous argument
		i--;
	}
	// Return 0 to indicate successful program end
	return (0);
}
