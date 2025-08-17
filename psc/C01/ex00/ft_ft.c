/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:51:42 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:07:13 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function sets the value pointed to by 'nbr' to 42
void	ft_ft(int *nbr) // Takes a pointer to an integer as input
{
    // Set the value at the address pointed to by 'nbr' to 42
	*nbr = 42;
}
