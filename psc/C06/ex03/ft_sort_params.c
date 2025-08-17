/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:28:49 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:39:14 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


// Include the library for write function (used to print characters to the screen)
#include <unistd.h>


// Function to print a single character to the screen
void ft_putchar(char c)
{
	write(1, &c, 1);
}


// Function to compare two strings, similar to the standard strcmp
// Returns a negative number if str1 < str2, 0 if equal, positive if str1 > str2
int ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	// Loop through both strings as long as characters are equal and not at the end
	while (str1[i] == str2[i] && str1[i] != '\0')
		i++;
	// Return the difference between the first different characters
	return (str1[i] - str2[i]);
}


// Function to print all arguments (except program name), one per line
void ft_print_args(int argc, char **argv)
{
	int i;
	int j;

	// Start from 1 to skip the program name
	i = 1;
	while (i < argc)
	{
		j = 0;
		// Print each character of the argument
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		// Print a newline after each argument
		ft_putchar('\n');
	}
}


// The main function: entry point of the program
// Sorts the command-line arguments alphabetically and prints them
int main(int argc, char **argv)
{
	// Declare variables: 'i' and 'j' for indices, 'arg' for swapping
	int i;
	int j;
	char *arg;

	// Start from 1 to skip the program name
	i = 1;
	// Loop through each argument
	while (i < argc)
	{
		j = i;
		// Compare the current argument with the previous one
		// If out of order, swap them and keep checking backwards
		while (ft_strcmp(argv[j], argv[j - 1]) < 0 && j > 1)
		{
			// Swap the arguments
			arg = argv[j - 1];
			argv[j - 1] = argv[j];
			argv[j] = arg;
			j--;
		}
		i++;
	}
	// Print the sorted arguments
	ft_print_args(argc, argv);
	// Return 0 to indicate successful program end
	return (0);
}
