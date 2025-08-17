/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:01:52 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:34:07 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function calculates nb raised to the power using an iterative approach
int	ft_iterative_power(int nb, int power) // Takes a base and an exponent as input
{
    // Declare variables for the loop counter and the result
	int	i;
	int	result;

    // Start with i = 0 and result = 1
	i = 0;
	result = 1;
    // If the exponent is negative, return 0 (not defined for negative powers)
	if (power < 0)
	{
		return (0);
	}
    // If the exponent is 0, return 1 (any number to the power of 0 is 1)
	if (power == 0)
	{
		return (1);
	}
    // Multiply result by nb, power times
	while (i < power)
	{
		result = result * nb;
		i++;
	}
    // Return the calculated power
	return (result);
}

/*
// Example usage:
// int main()
// {
//     int a = 2;
//     int res = 30;
//     int rezult = ft_iterative_power(a, res); // This will calculate 2^30
//     printf("%d", rezult);
//     return(0);
// }
*/