/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:25:15 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:09:08 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function updates the values pointed to by 'a' and 'b' with the result of division and modulus
void	ft_ultimate_div_mod(int *a, int *b) // Takes pointers to two integers as input
{
    // Declare a temporary variable to store the original value of 'a'
	int	temp_a;

    // Store the value pointed to by 'a' in 'temp_a'
	temp_a = *a;
    // Set the value pointed to by 'a' to the result of integer division (original a divided by b)
	*a = temp_a / *b;
    // Set the value pointed to by 'b' to the remainder of the division (original a modulo b)
	*b = temp_a % *b;
}

/*
// Example usage:
// int main()
// {
//     int a = 50;
//     int b = 12;
//     ft_ultimate_div_mod(&a, &b); // This will update a and b with division and modulus
//     printf("a is %d b is %d", a, b);
//     return 0;
// }
*/