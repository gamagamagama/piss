/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:37:14 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/14 18:34:53 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (str == NULL)
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
int	main()
{
	char string0[] = "ahoj";
	char string1[] = "CAU";
	char string2[] = "123";
	char string3[] = "";
	char string4[] = "ahojCAU123//";

	int ret[5];

	ret[0] = ft_str_is_lowercase(string0);
	printf("string0 : %s\n %d\n", string0,ret[0]);

	ret[1] = ft_str_is_lowercase(string1);
	printf("string1 : %s\n %d\n", string1,ret[1]);

	ret[2] = ft_str_is_lowercase(string2);
	printf("string2 : %s\n %d\n", string2,ret[2]);

	ret[3] = ft_str_is_lowercase(string3);
	printf("string3 : %s\n %d\n", string3,ret[3]);

	ret[4] = ft_str_is_lowercase(string4);
	printf("string4 : %s\n %d\n", string4,ret[4]);

	return (0);

	
}
*/