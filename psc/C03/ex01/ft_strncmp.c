/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:55:07 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:29:13 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// This function compares up to 'n' characters of two strings
// Returns 0 if they are equal, -1 if s1 < s2, 1 if s1 > s2
int	ft_strncmp(char *s1, char *s2, unsigned int n) // Takes two strings and a number as input
{
    // Declare a variable for the current index
	unsigned int	i;

    // Start at the beginning of the strings
	i = 0;
    // Loop as long as neither string has ended and i is less than n
	while ((s1[i] || s2[i]) && (i < n))
	{
        // If the character in s1 is less than in s2, return -1
		if (s1[i] < s2[i])
		{
			return (-1);
		}
        // If the character in s1 is greater than in s2, return 1
		else if (s1[i] > s2[i])
		{
			return (1);
		}
        // Move to the next character
		i++;
	}
    // If all compared characters are equal, return 0
	return (0);
}

/*
// Example usage:
// int main()
// {
//     char string[] = "Ahoj";
//     char string1[] = "Ahoj";
//     char string2[] = "Ahuj";
//     int length = 6;
//
//     int result = ft_strncmp(string, string2, length);
//     // result will be 0 if equal, -1 if string < string2, 1 if string > string2
//     return 0;
// }
*/