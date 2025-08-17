/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:45:58 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/16 13:12:09 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	is_lowercase(char x)
{
	return (x >= 97 && x <= 122);
}

char	is_uppercase(char x)
{
	return (x >= 65 && x <= 90);
}

char	is_special(char x)
{
	return (x == '+' || x == '-');
	return (x >= 33 && x <= 47);
	return (x >= 58 && x <= 64);
	return (x >= 91 && x <= 96);
	return (x >= 123 && x <= 126);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lowercase(str[0]))
			str[0] = str[0] - 32;
		if (is_uppercase(str[i]) && (is_lowercase(str[i - 1])))
			str[i] = str[i] + 32;
		if (str[i - 1] == 32)
			if (is_lowercase(str[i]))
				str[i] = str[i] - 32;
		if (is_special(str[i]) && is_lowercase(str[i + 1]))
			str[i + 1] = str[i + 1] - 32;
		if (is_uppercase(str[i]) && is_uppercase(str[i - 1]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*	
int	main(void)
{
	char	in[] = "salut, cOmMent tu vas ? 42mots qUArante-DEUX;
	char *result;

	result = ft_strcapitalize(in);
	printf("result : %s\n", result);
	

	return (0);
}
*/