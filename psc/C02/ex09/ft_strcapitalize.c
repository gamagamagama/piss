/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:45:58 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:24:58 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function checks if a character is a lowercase letter
int	is_lowercase(char x)
{
	return (x >= 97 && x <= 122);
}

// This function checks if a character is an uppercase letter
int	is_uppercase(char x)
{
	return (x >= 65 && x <= 90);
}

// This function checks if a character is a special character (not a letter or digit)
int	is_special(char x)
{
	// This function checks if a character is a special (non-alphanumeric printable) character
	if ((x >= 32 && x <= 47) || (x >= 58 && x <= 64) || (x >= 91 && x <= 96) || (x >= 123 && x <= 126))
		return 1;
	return 0;
}

// This function capitalizes the first letter of each word in a string and makes the rest lowercase
char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	// Loop through each character in the string
	while (str[i] != '\0')
	{
		// If the first character is lowercase, capitalize it
		if (is_lowercase(str[0]))
			str[0] = str[0] - 32;
		// If current is uppercase and previous is lowercase, make current lowercase
		if (is_uppercase(str[i]) && (is_lowercase(str[i - 1])))
			str[i] = str[i] + 32;
		// If previous character is a space and current is lowercase, capitalize current
		if (str[i - 1] == 32)
			if (is_lowercase(str[i]))
				str[i] = str[i] - 32;
		// If current is special and next is lowercase, capitalize next
		if (is_special(str[i]) && is_lowercase(str[i + 1]))
			str[i + 1] = str[i + 1] - 32;
		// If current and previous are uppercase, make current lowercase
		if (is_uppercase(str[i]) && is_uppercase(str[i - 1]))
			str[i] = str[i] + 32;
		i++;
	}
	// Return the modified string
	return (str);
}

/*
//Example usage:
int main(void)
{
    char in[] = "salut, cOmMent tu vas ? 42mots qUArante-DEUX";
    char *result;

    result = ft_strcapitalize(in); // This will capitalize the first letter of each word
    printf("result : %s\n", result);

    return (0);
}
*/