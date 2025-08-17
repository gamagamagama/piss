/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:59:04 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:36:23 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


// Include the standard input/output library for using printf (if needed in main)
#include <stdio.h>


// This function tries to find the square root of a given integer 'nb'.
// If 'nb' is a perfect square, it returns the square root.
// If not, it returns 0.
int ft_sqrt(int nb)
{
	// Declare a variable 'i' to use as a counter.
	int i;

	// Start 'i' at 1. We'll check each number from 1 upwards.
	i = 1;

	// If the input number is less than or equal to 0, it can't have a real square root.
	if (nb <= 0)
	{
		// Return 0 to indicate no valid square root.
		return (0);
	}

	// Loop as long as 'i' is less than or equal to 'nb' and less than or equal to 46340.
	// 46340 is used because 46341*46341 is greater than the maximum value for an int.
	while (i <= nb && i <= 46340)
	{
		// If 'i' squared is equal to 'nb', we've found the square root.
		if (i * i == nb)
		{
			// Return 'i' as the square root.
			return (i);
		}
		// Otherwise, increase 'i' by 1 and check the next number.
		++i;
	}
	// If no number squared equals 'nb', return 0 (not a perfect square).
	return (0);
}


// Example main function to test ft_sqrt (uncomment to use)
// int main ()
// {
//     int num = 2147483647; // Try with a large number
//     printf("%d\n", ft_sqrt(num)); // Print the result
//     return(0);
// }