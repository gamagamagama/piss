/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:03:43 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:13:56 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function checks if a string contains only numeric characters (0-9)
int	ft_str_is_numeric(char *str) // Takes a pointer to a string as input
{
    // If the input string is NULL, return 1 (considered as only numeric)
	if (str == NULL)
	{
		return (1);
	}
    // Loop through each character in the string until the end (null terminator)
	while (*str != '\0')
	{
        // If the character is not between '0' and '9', return 0 (not numeric)
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
        // Move to the next character
		str++;
	}
    // If all characters are numeric, return 1
	return (1);
}

/*
// Example usage:
// int main()
// {
//     char string1[] = "12345656";
//     char string2[] = "abc1234";
//     char string3[] = "abc";
//     char string4[] = "";
//     char string5[] = "123;][[]]";
//
//     int ret[5];
//
//     ret[0] = ft_str_is_numeric(string1);
//     printf("string1 : %s\n %d\n", string1, ret[0]);
//
//     ret[1] = ft_str_is_numeric(string2);
//     printf("string2 : %s\n %d\n", string2, ret[1]);
//
//     ret[2] = ft_str_is_numeric(string3);
//     printf("string3 : %s\n %d\n", string3, ret[2]);
//
//     ret[3] = ft_str_is_numeric(string4);
//     printf("string4 : %s\n %d\n", string4, ret[3]);
//
//     ret[4] = ft_str_is_numeric(string5);
//     printf("string5 : %s\n %d\n", string5, ret[4]);
//
//     return(0);
// }
*/