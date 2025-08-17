/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:41:38 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:33:16 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function calculates the factorial of a number using an iterative approach
int	ft_iterative_factorial(int nb) // Takes an integer as input
{
    // Declare a variable to store the result (use unsigned int for large values)
	unsigned int	i;

    // Start with 1 (factorial of 0 is 1)
	i = 1;
    // If the input is negative, factorial is not defined, return 0
	if (nb < 0)
	{
		return (0);
	}
    // Multiply i by nb, then decrease nb, until nb is 0
	while (nb > 0)
	{
		i *= nb;
		--nb;
	}
    // Return the calculated factorial
	return (i);
}

/*
// Example usage:
// int main()
// {
//     int a = 5;
//     int result = ft_iterative_factorial(a); // This will calculate 5!
//     printf("Factorial of %d is %d\n", a, result);
//     return 0;
// }
*/