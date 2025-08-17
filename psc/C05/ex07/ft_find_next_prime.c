/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:25:15 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:37:20 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


// Include the standard input/output library for using printf (if needed in main)
#include <stdio.h>


// This function finds the next prime number greater than or equal to 'nb'.
// If 'nb' is already prime, it returns 'nb'.
int ft_find_next_prime(int nb)
{
	// Declare variables: 'i' for checking divisors, 'x' for the remainder.
	int i;
	int x;

	// Start checking divisors from 2.
	i = 2;

	// Loop to check if 'nb' is prime.
	// If not, increase 'nb' and check again.
	while (i < nb && i <= 46340)
	{
		// Calculate the remainder when 'nb' is divided by 'i'.
		x = (nb % i);
		// If the remainder is 0, 'nb' is divisible by 'i', so it's not prime.
		if (x == 0)
		{
			// Increase 'nb' by 1 to check the next number.
			++nb;
			// Reset 'i' to 1 so it will become 2 on the next loop.
			i = 1;
		}
		// Try the next divisor.
		++i;
	}

	// If 'nb' is less than or equal to 1, keep increasing it until it's greater than 1.
	while (nb <= 1)
	{
		++nb;
		i = 2;
	}

	// Return the found prime number.
	return (nb);
}


// Example main function to test ft_find_next_prime (uncomment to use)
// int main()
// {
//     int numb = 10; // Try with a number to find the next prime
//     printf("%d",  ft_find_next_prime(numb)); // Print the result
//     return(0);
// }