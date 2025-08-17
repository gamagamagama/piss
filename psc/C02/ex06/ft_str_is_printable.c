/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:03:45 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/12 12:07:58 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (str == NULL)
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
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
	

	char xx[255] = {125};
    	char yy[255] = {127};
    	char zz[255] = {00};

	int ret,ret1,ret2;

	ret = ft_str_is_printable(xx);
	printf("string1 : %s %d \n", xx, ret);

	ret1 = ft_str_is_printable(yy);
	printf("string2 : %s %d \n", yy, ret1);

	ret2 = ft_str_is_printable(zz);
	printf("string3 : %s %d \n", zz, ret2);

	return (0);
}
*/