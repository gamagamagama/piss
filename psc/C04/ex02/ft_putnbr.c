/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:54:06 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:32:09 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h> // Needed for the write function to print characters
#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function prints a single character to the screen
void	ft_putchar(char c) // Takes a character as input
{
	write(1, &c, 1); // Print the character to the screen
}

// This function prints an integer number to the screen
void	ft_putnbr(int nb) // Takes an integer as input
{
	// Handle the special case for the smallest negative integer
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	// If the number is negative, print '-' and call the function recursively with the positive value
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb = -nb);
	}
	// If the number is a single digit, print it as a character
	else if (nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	// If the number has more than one digit, print all digits recursively
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

/*
// Example usage:
// int main()
// {
//     int number = 2147483647;
//     ft_putnbr(number); // This will print the number
//     return(0);
// }
*/