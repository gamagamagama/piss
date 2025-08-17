/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:59:34 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/14 18:31:44 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (str == NULL)
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
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
	char string1[] = "PointersarenewHellou";
	char string2[] = "pointers21331";
	char string3[] = "";
	
	int result1;
	int result2;
	int result3;
	
	result1 = (ft_str_is_alpha(string1));
	printf("string1 : %s\n %d\n ", string1, result1);
	
	
	result2 = (ft_str_is_alpha(string2));
	printf("string2 : %s\n %d\n", string2, result2);
	

	result3 = (ft_str_is_alpha(string3));
	printf("string3 : %s\n %d\n", string3, result3);
	
	return 0;
}
*/