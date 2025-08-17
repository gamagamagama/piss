/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:03:43 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/14 18:32:45 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (str == NULL)
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
int main()
{
	char string1[] = "12345656";
	char string2[] = "abc1234";
	char string3[] = "abc";
	char string4[] = "";
	char string5[] = "123;][[]]";

	int ret[4];
	

	ret[0] = ft_str_is_numeric(string1);
	printf("string1 : %s\n %d\n", string1, ret[0]);

	ret[1] = ft_str_is_numeric(string2);
	printf("string2 : %s\n %d\n", string2, ret[1]);

	ret[2] = ft_str_is_numeric(string3);
	printf("string3 : %s\n %d\n", string3, ret[2]);

	ret[3] = ft_str_is_numeric(string4);
	printf("string4 : %s\n %d\n", string4, ret[3]);

	ret[4] = ft_str_is_numeric(string5);
	printf("string5 : %s\n %d\n", string5, ret[4]);

	return(0);

}
*/