/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:55:11 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:38:23 by mgavornik        ###   ########.fr       */
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

	// Start 'i' at 1 to skip the program name (argv[0])
	i = 1;
	// 'j' will be used inside the loop
	j = 0;

	// Loop through each argument (except the program name)
	while (i < argc)
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
		// Move to the next argument
		i++;
	}
	// Return 0 to indicate successful program end
	return (0);
}
