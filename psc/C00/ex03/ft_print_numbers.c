/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:01:14 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:05:47 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h> // Needed for the write function to print characters

// This function prints all digits from '0' to '9' to the screen
void	ft_print_numbers(void) // No input arguments
{
    // Declare a variable to store the current digit
	char	a;

    // Start with the character '0'
	a = '0';
    // Loop as long as 'a' is less than or equal to '9'
	while (a <= '9')
	{
        // Print the current digit to the screen
		write(1, &a, 1);
        // Move to the next digit
		a++;
	}
}
