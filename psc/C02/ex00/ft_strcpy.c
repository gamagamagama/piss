/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:29:02 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/14 20:13:34 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*asig;

	asig = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (asig);
}

/*
int main() {
    const char *source = "to je dobra kokotina"; 
    char destination[50]; 
    ft_strcpy(destination, source);
    
    printf("pointer addr : %p\n", &source);
    printf("source: %s\n", source); 
    printf("destination addr : %p\n", &destination);
    printf("destination: %s\n", destination);
    
    return 0;
}

*/