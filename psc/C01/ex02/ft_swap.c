/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:28:13 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:08:06 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function swaps the values of two integers using pointers
void	ft_swap(int *a, int *b) // Takes pointers to two integers as input
{
    // Declare a temporary variable to help with swapping
	int	temp;

    // Store the value pointed to by 'a' in 'temp'
	temp = *a;
    // Set the value pointed to by 'a' to the value pointed to by 'b'
	*a = *b;
    // Set the value pointed to by 'b' to the value stored in 'temp'
	*b = temp;
}

/*
// Example usage:
// int main()
// {
//     int x = 5;
//     int y = 10;
//
//     printf("Before swapping: x = %d, y = %d\n", x, y);
//
//     ft_swap(&x, &y); // This will swap the values of x and y
//
//     printf("After swapping: x = %d, y = %d\n", x, y);
//
//     return 0;
// }
*/