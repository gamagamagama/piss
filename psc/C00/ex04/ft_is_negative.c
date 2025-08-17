/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:11:25 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:06:11 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h> // Needed for the write function to print characters

// This function prints 'P' if the number is positive or zero, and 'N' if it is negative
void	ft_is_negative(int n) // Takes an integer 'n' as input
{
    // Declare a variable to store the character 'P' (for positive)
	char	a;
    // Declare a variable to store the character 'N' (for negative)
	char	b;

    // Set 'a' to 'P'
	a = 'P';
    // Set 'b' to 'N'
	b = 'N';
    // If the number is greater than or equal to zero
	if (n >= 0)
	{
        // Print 'P' for positive or zero
		write(1, &a, 1);
	}
	else
	{
        // Print 'N' for negative
		write(1, &b, 1);
	}
}
/*
// Example usage:
// void	main(void)
// {
//     ft_is_negative(10); // This will print 'P'
//     return (0);
// }
*/