/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:18:08 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:07:33 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function sets the value pointed to by a pointer to a pointer to a pointer (9 levels) to 42
void	ft_ultimate_ft(int *********nbr) // Takes a pointer to a pointer to a pointer... (9 times) to an int
{
    // Set the value at the address pointed to by 9 levels of pointers to 42
	*********nbr = 42;
}
