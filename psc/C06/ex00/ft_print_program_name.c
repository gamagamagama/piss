/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:56:29 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:37:49 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


// Include the library for write function (used to print characters to the screen)
#include <unistd.h>


// The main function: entry point of the program
// argc: number of command-line arguments
// argv: array of strings (each argument)
int main(int argc, char **argv)
{
	// Declare a variable 'i' to use as an index
	int i;

	// Start 'i' at 0
	i = 0;

	// If there is at least one argument (the program name itself)
	if (argc)
	{
		// Loop through each character of the program name (argv[0])
		while (argv[0][i])
		{
			// Increase 'i' by 1
			i++;
			// Write the character at position i-1 to the screen
			write(1, &argv[0][i - 1], 1);
		}
		// After printing the name, print a newline character
		write(1, "\n", 1);
	}
	// No return value needed for main in this context (but usually return 0)
}
