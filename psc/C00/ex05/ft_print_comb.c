/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:13:25 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:06:43 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h> // Needed for the write function to print characters

// This function prints three characters in a row
void	ft_putchar(char a, char b, char c) // Takes three characters as input
{
    // Print the first character
	write(1, &a, 1);
    // Print the second character
	write(1, &b, 1);
    // Print the third character
	write(1, &c, 1);
}

// This function prints all combinations of three different digits in ascending order
void	ft_print_comb(void) // No input arguments
{
    // Declare variables to store the three digits
	char	a;
	char	b;
	char	c;

	a = '0';
    // Loop for the first digit from '0' to '7'
	while (a <= '7')
	{
        // The second digit is always greater than the first
		b = a + 1;
        // Loop for the second digit from (a+1) to '8'
		while (b <= '8')
		{
            // The third digit is always greater than the second
			c = b + 1;
            // Loop for the third digit from (b+1) to '9'
			while (c <= '9')
			{
                // Print the current combination of three digits
				ft_putchar(a, b, c);
                // If this is not the last combination, print a comma and space
				if (c != '9' || b != '8' || a != '7')
				{
					write(1, ", ", 2);
				}
                // Move to the next value for the third digit
				c++;
			}
            // Move to the next value for the second digit
			b++;
		}
        // Move to the next value for the first digit
		a++;
	}
}

/*
// Example usage:
// void	main(void)
// {
//     ft_print_comb(); // This will print all combinations of three different digits
//     return (0);
// }
*/