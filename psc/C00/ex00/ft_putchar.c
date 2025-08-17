/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:37:08 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:03:14 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h> // This line includes the standard library needed for the write function

// This function prints a single character to the screen
void ft_putchar(char c) // 'c' is the character to print
{
	// write is a system call that outputs data
	// 1 means standard output (the screen)
	// &c is the address of the character to print
	// 1 means we want to print only one character
	write(1, &c, 1);
}
