/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:10:24 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/12 13:42:21 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ns;

	ns = str;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			*str = *str + 32;
		}
		str++;
	}
	return (ns);
}

/*
int	main()
{
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVvWXy12Z";

	char *result;

	result = ft_strlowcase(in);
	printf("result : %s\n", result);
	

	return (0);
}
*/