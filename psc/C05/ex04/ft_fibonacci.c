/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:36:39 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:35:05 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function returns the nth Fibonacci number using recursion
int	ft_fibonacci(int index) // Takes an integer index as input
{
    // If the index is negative, return -1 (not defined)
	if (index < 0)
	{
		return (-1);
	}
    // If the index is 0, return 0 (base case)
	else if (index == 0)
	{
		return (0);
	}
    // If the index is 1, return 1 (base case)
	else if (index == 1)
	{
		return (1);
	}
    // For all other cases, return the sum of the two previous Fibonacci numbers
	else
	{
		return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index -2)));
	}
}

/*
// Example usage:
// int main()
// {
//     int in = 5;
//     int res;
//     res = ft_fibonacci(in); // This will calculate the 5th Fibonacci number
//     printf("index:%d holds value: %d in fibonacci", in, res);
//     return(0);
// }
*/