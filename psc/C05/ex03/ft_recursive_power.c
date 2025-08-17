/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:32:43 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:34:33 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function calculates nb raised to the power using recursion
int	ft_recursive_power(int nb, int power) // Takes a base and an exponent as input
{
    // If the exponent is negative, return 0 (not defined for negative powers)
	if (power < 0)
	{
		return (0);
	}
    // If the exponent is positive, multiply nb by the result of nb^(power-1)
	else if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
    // If the exponent is 0, return 1 (any number to the power of 0 is 1)
	else
	{
		return (1);
	}
}

/*
// Example usage:
// int main()
// {
//     int num = 2;
//     int pow = 8;
//     int result = ft_recursive_power(num, pow); // This will calculate 2^8
//     printf("number %d to power of %d is %d", num, pow, result);
//     return(0);
// }
*/
