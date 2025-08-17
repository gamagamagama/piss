/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 04:10:15 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:30:32 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function finds the first occurrence of the substring to_find in the string str
// Returns a pointer to the beginning of the substring, or 0 if not found
char	*ft_strstr(char *str, char *to_find) // Takes two strings as input
{
    // Declare variables for the current index in str and to_find
	int	i;
	int	j;

    // Start at the beginning of both strings
	i = 0;
	j = 0;
    // If to_find is an empty string, return str
	if (!to_find[j])
		return (str);
    // Loop through each character in str
	while (str[i])
	{
        // If the current character matches the first character of to_find
		if (str[i] == to_find[j])
		{
            // Start comparing both strings from this position
			i = 0;
			j = 0;
			while (to_find[j] && str[i] == to_find[j])
			{
				i++;
				j++;
			}
            // If we reached the end of to_find, substring is found
			if (!to_find[j])
				return (str);
		}
        // Move to the next character in str
		str++;
	}
    // If substring is not found, return 0
	return (0);
}

/*
// Example usage:
// int main()
// {
//     char string[] = "helldlo do slldo ahoj";
//     char find[] = "ldo";
//     char *result;
//     result = ft_strstr(string, find); // This will point to the first occurrence of "ldo"
//     printf("%s", result);
//     return(0);
// }
*/