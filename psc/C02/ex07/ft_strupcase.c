/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:12:27 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/12 13:43:33 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*ns;

	ns = str;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - 32;
		}
		str++;
	}
	return (ns);
}

/*
int	main()
{
	char in[] = "abcdefghijklmnop@qrdtUuvWwxyz";

	char *result;

	result = ft_strupcase(in);
	printf("result : %s\n", result);
	

	return (0);
}
*/
