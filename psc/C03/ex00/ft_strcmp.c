/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:28:30 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:28:48 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function compares two strings character by character
// Returns 0 if they are equal, a positive or negative value if they differ
int	ft_strcmp(char *s1, char *s2) // Takes two pointers to strings as input
{
    // Loop through both strings as long as neither has reached the end
	while (*s1 != '\0' && *s2 != '\0')
	{
        // If the characters are different, return the difference
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
        // Move to the next character in both strings
		s1++;
		s2++;
	}
    // If the loop ends, return the difference of the current characters (handles different lengths)
	return (*s1 - *s2);
}

/*
// Example usage:
// int main()
// {
//     unsigned char s1[] = "ssaler";
//     unsigned char s2[] = "sialer";
//     unsigned char result;
//     result = ft_strcmp(s1, s2);
//
//     //printf("%x \n", *s1);
//     //printf("%x \n", *s2);
//     printf("%x %x %d", *s1, *s2, result);
//
//     return(0);
// }
*/