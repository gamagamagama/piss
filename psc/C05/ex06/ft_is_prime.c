/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:26:18 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:36:49 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


// Include the standard input/output library for using printf (if needed in main)
#include <stdio.h>


// This function checks if a given integer 'nb' is a prime number.
// Returns 1 if 'nb' is prime, 0 otherwise.
int ft_is_prime(int nb)
{
	// Declare a variable 'i' to use as a divisor, and 'x' to store the remainder.
	int i;
	int x;

	// Start checking from 2, since 1 is not a prime divisor.
	i = 2;

	// Loop from 2 up to (but not including) 'nb'.
	while (i < nb)
	{
		// Calculate the remainder when 'nb' is divided by 'i'.
		x = (nb % i);
		// If the remainder is 0, 'nb' is divisible by 'i', so it's not prime.
		if (x == 0)
		{
			// Return 0 to indicate 'nb' is not a prime number.
			return (0);
		}
		// Otherwise, try the next number.
		++i;
	}

	// If 'nb' is less than or equal to 1, it's not a prime number.
	if (nb <= 1)
	{
		return (0);
	}

	// If no divisors were found, 'nb' is prime. Return 1.
	return (1);
}


// Example main function to test ft_is_prime (uncomment to use)
// int main()
// {
//     int numb = 11; // Try with a number to check if it's prime
//     printf("%d", ft_is_prime(numb)); // Print the result (1 for prime, 0 for not prime)
//     return(0);
// }