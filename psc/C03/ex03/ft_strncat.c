/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 02:58:40 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:30:06 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function appends up to 'nb' characters from src to the end of dest
char	*ft_strncat(char *dest, char *src, unsigned int nb) // Takes two strings and a number as input
{
    // Declare variables for the current index in dest and src
	unsigned int	i;
	unsigned int	j;

    // Find the end of the dest string
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
    // Copy up to nb characters from src to the end of dest
	while ((src[j]) && (j < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
    // Null-terminate the resulting string
	dest[i] = '\0';
    // Return the pointer to the start of dest
	return (dest);
}

/*
// Example usage:
// int main()
// {
//     char destin[100] = "Hello ";
//     char sorc[] = "world";
//     unsigned int nb2 = 7;
//     ft_strncat(destin, sorc, nb2); // This will append up to 7 characters from sorc to destin
//     printf("%s", destin);
//     return(0);
// }
*/