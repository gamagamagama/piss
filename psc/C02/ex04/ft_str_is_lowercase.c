/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:37:14 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:14:25 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function checks if a string contains only lowercase letters (a-z)
int	ft_str_is_lowercase(char *str) // Takes a pointer to a string as input
{
    // If the input string is NULL, return 1 (considered as only lowercase)
	if (str == NULL)
	{
		return (1);
	}
    // Loop through each character in the string until the end (null terminator)
	while (*str != '\0')
	{
        // If the character is not between 'a' and 'z', return 0 (not lowercase)
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
        // Move to the next character
		str++;
	}
    // If all characters are lowercase, return 1
	return (1);
}

/*
// Example usage:
// int main()
// {
//     char string0[] = "ahoj";
//     char string1[] = "CAU";
//     char string2[] = "123";
//     char string3[] = "";
//     char string4[] = "ahojCAU123//";
//
//     int ret[5];
//
//     ret[0] = ft_str_is_lowercase(string0);
//     printf("string0 : %s\n %d\n", string0,ret[0]);
//
//     ret[1] = ft_str_is_lowercase(string1);
//     printf("string1 : %s\n %d\n", string1,ret[1]);
//
//     ret[2] = ft_str_is_lowercase(string2);
//     printf("string2 : %s\n %d\n", string2,ret[2]);
//
//     ret[3] = ft_str_is_lowercase(string3);
//     printf("string3 : %s\n %d\n", string3,ret[3]);
//
//     ret[4] = ft_str_is_lowercase(string4);
//     printf("string4 : %s\n %d\n", string4,ret[4]);
//
//     return (0);
// }
*/