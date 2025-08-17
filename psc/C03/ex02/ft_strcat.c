/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 02:11:49 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:29:40 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function appends the src string to the end of the dest string
char	*ft_strcat(char *dest, char *src) // Takes two strings as input
{
    // Declare variables for the current index in dest and src
	int	i;
	int	j;

    // Find the end of the dest string
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
    // Copy each character from src to the end of dest
	while (src[j] != '\0')
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
//     char dest[] = "This is";
//     char src[] = "NEW STRING";
//     printf("%s", ft_strcat(dest, src)); // This will print the concatenated string
// }
*/
