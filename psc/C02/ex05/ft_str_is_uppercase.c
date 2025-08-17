/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:43:15 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:14:48 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function checks if a string contains only uppercase letters (A-Z)
int	ft_str_is_uppercase(char *str) // Takes a pointer to a string as input
{
    // If the input string is NULL, return 1 (considered as only uppercase)
	if (str == NULL)
	{
		return (1);
	}
    // Loop through each character in the string until the end (null terminator)
	while (*str != '\0')
	{
        // If the character is not between 'A' and 'Z', return 0 (not uppercase)
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
        // Move to the next character
		str++;
	}
    // If all characters are uppercase, return 1
	return (1);
}

/*
// Example usage:
// int main()
// {
//     char string1[] = "HELL OU";
//     char string2[] = "W0RlD";
//     char string3[] = "";
//     char string4[] = "HELL";
//
//     int ret[4];
//
//     ret[0] =  ft_str_is_uppercase(string1);
//     printf("String1 : %s %d \n", string1, ret[0]);
//
//     ret[1] =  ft_str_is_uppercase(string2);
//     printf("String2 : %s %d \n", string2, ret[1]);
//
//     ret[2] =  ft_str_is_uppercase(string3);
//     printf("String3 : %s %d \n", string3, ret[2]);
//
//     ret[3] =  ft_str_is_uppercase(string4);
//     printf("String4 : %s %d \n", string4, ret[3]);
//
//     return (0);
// }
*/