/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:16:02 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:08:41 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function calculates the division and modulus of two integers
// and stores the results in the provided pointers
void	ft_div_mod(int a, int b, int *div, int *mod) // Takes two integers and two pointers as input
{
    // Store the result of integer division (a divided by b) in the location pointed to by 'div'
	*div = a / b;
    // Store the remainder of the division (a modulo b) in the location pointed to by 'mod'
	*mod = a % b;
}

/*
// Example usage:
// int main()
// {
//     int a = 25;
//     int b = 10;
//     int division;
//     int modulus;
//
//     ft_div_mod(a, b, &division, &modulus); // This will calculate division and modulus
//
//     printf("Division : %d\n", division);
//     printf("Modulus : %d\n", modulus);
//
//     return 0;
// }
*/