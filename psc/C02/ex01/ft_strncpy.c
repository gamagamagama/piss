/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:21:21 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/11 17:14:10 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*asig;

	asig = dest;
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (asig);
}

/*
int main()
{
	char *source = "to je dobra kokotina"; 
	char destination[50];
	int n = 5; 
	
	ft_strncpy(destination, source, n);
	
	printf("pointer addr : %p\n", &source);
	printf("source: %s\n", source); 
	printf("destination addr : %p\n", &destination);
	printf("destination: %s\n", destination);
	return 0;
}
*/