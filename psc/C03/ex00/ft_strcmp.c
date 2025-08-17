/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:28:30 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/25 18:25:02 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
int	main()
{
	unsigned char	s1[] = "ssaler";
	unsigned char	s2[] = "sialer";
	unsigned char	result;
	result = ft_strcmp(s1, s2);
	
	

	//printf("%x \n", *s1);
	//printf("%x \n", *s2); 
	printf("%x %x %d", *s1, *s2, result);


	return(0);
}
*/