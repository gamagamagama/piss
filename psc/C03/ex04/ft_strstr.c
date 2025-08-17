/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 04:10:15 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/25 18:25:50 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[j])
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			i = 0;
			j = 0;
			while (to_find[j] && str[i] == to_find[j])
			{
				i++;
				j++;
			}
			if (!to_find[j])
				return (str);
		}
		str++;
	}
	return (0);
}

// int main()
// {
// 	char string[] = "helldlo do slldo ahoj";
// 	char find[] = "ldo";
// 	char	*result;
// 	result = ft_strstr(string, find);
// 	printf("%s", result);
// 	return(0);
// }