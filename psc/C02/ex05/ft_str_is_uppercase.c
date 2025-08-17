/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:43:15 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/12 11:15:05 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (str == NULL)
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
	char	string1[] = "HELL OU";
	char	string2[] = "W0RlD";
	char	string3[] = "";
	char	string4[] = "HELL";

	int 	ret[3];

	ret[0] =  ft_str_is_uppercase(string1);
	printf("String1 : %s %d \n", string1, ret[0]);

	ret[1] =  ft_str_is_uppercase(string2);
	printf("String2 : %s %d \n", string2, ret[1]);

	ret[2] =  ft_str_is_uppercase(string3);
	printf("String3 : %s %d \n", string3, ret[2]);

	ret[3] =  ft_str_is_uppercase(string4);
	printf("String4 : %s %d \n", string4, ret[3]);

	return (0);
}
*/