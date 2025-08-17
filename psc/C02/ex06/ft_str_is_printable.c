/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:03:45 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:15:21 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function checks if a string contains only printable characters (ASCII 32 to 126)
int	ft_str_is_printable(char *str) // Takes a pointer to a string as input
{
    // If the input string is NULL, return 1 (considered as only printable)
	if (str == NULL)
	{
		return (1);
	}
    // Loop through each character in the string until the end (null terminator)
	while (*str != '\0')
	{
        // If the character is not in the printable ASCII range, return 0 (not printable)
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
        // Move to the next character
		str++;
	}
    // If all characters are printable, return 1
	return (1);
}

/*
// Example usage:
// int main()
// {
//     char xx[255] = {125};
//     char yy[255] = {127};
//     char zz[255] = {00};
//
//     int ret, ret1, ret2;
//
//     ret = ft_str_is_printable(xx);
//     printf("string1 : %s %d \n", xx, ret);
//
//     ret1 = ft_str_is_printable(yy);
//     printf("string2 : %s %d \n", yy, ret1);
//
//     ret2 = ft_str_is_printable(zz);
//     printf("string3 : %s %d \n", zz, ret2);
//
//     return (0);
// }
*/