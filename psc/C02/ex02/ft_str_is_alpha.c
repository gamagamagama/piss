/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:59:34 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:13:23 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function checks if a string contains only alphabetic characters (A-Z, a-z)
int	ft_str_is_alpha(char *str) // Takes a pointer to a string as input
{
    // If the input string is NULL, return 1 (considered as only alphabetic)
	if (str == NULL)
	{
		return (1);
	}
    // Loop through each character in the string until the end (null terminator)
	while (*str != '\0')
	{
        // If the character is not between 'A'-'Z' or 'a'-'z', return 0 (not alphabetic)
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		{
			return (0);
		}
        // Move to the next character
		str++;
	}
    // If all characters are alphabetic, return 1
	return (1);
}

/*
// Example usage:
// int main()
// {
//     char string1[] = "PointersarenewHellou";
//     char string2[] = "pointers21331";
//     char string3[] = "";
//
//     int result1;
//     int result2;
//     int result3;
//
//     result1 = (ft_str_is_alpha(string1));
//     printf("string1 : %s\n %d\n ", string1, result1);
//
//     result2 = (ft_str_is_alpha(string2));
//     printf("string2 : %s\n %d\n", string2, result2);
//
//     result3 = (ft_str_is_alpha(string3));
//     printf("string3 : %s\n %d\n", string3, result3);
//
//     return 0;
// }
*/