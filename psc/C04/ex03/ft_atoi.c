/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:35:40 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:32:45 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function converts a string to an integer (like the standard atoi)
int	ft_atoi(char *str) // Takes a pointer to a string as input
{
    // Declare variables for the result, sign, and current index
	int	result;
	int	sign;
	int	i;

    // Initialize result to 0, sign to 1 (positive), and index to 0
	result = 0;
	sign = 1;
	i = 0;
    // Skip any whitespace characters (space, tab, newline, etc.)
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
    // Handle optional '+' and '-' signs
	while (str[i] == '-' || str[i] == '+')
	{
        // If the sign is '-', flip the sign
		if (str[i] == '-')
			sign *= -1;
        // Move to the next character
		i++;
	}
    // Convert the numeric part of the string
	while (str[i] >= '0' && str[i] <= '9')
	{
        // Multiply result by 10 and add the new digit
		result = result * 10 + str[i] - '0';
        // Move to the next character
		i++;
	}
    // Return the result with the correct sign
	return (result * sign);
}

/*
// Example usage:
// int main()
// {
//     char string[] = " --+---+1234ab567";
//     int result = ft_atoi(string); // This will convert the string to an integer
//     printf("The value of 'nb' is: %d\n", result);
// }
*/