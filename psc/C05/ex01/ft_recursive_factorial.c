/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:52:02 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:33:41 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function calculates the factorial of a number using recursion
int	ft_recursive_factorial(int nb) // Takes an integer as input
{
    // If nb is 0, the factorial is 1 (base case)
	if (nb == 0)
	{
		return (1);
	}
    // If nb is positive, multiply nb by the factorial of (nb - 1)
	else if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
    // If nb is negative, factorial is not defined, return 0
	else
	{
		return (0);
	}
}

/*
// Example usage:
// int main()
// {
//     int a = 6;
//     int result = ft_recursive_factorial(a); // This will calculate 6!
//     printf(" %d! is %d\n", a, result);
//     return 0;
// }
*/