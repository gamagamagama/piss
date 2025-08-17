/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:48:36 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/16 12:35:25 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size == 0 || dest == NULL)
	{
		return (src_len);
		src_len = 0;
	}
	while (i < size -1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/*
int main() {
    char dest[10];
    char *src = "Hello, World!";
    
    unsigned int copied = ft_strlcpy(dest, src, sizeof(dest));
    
    printf("Copied %u characters: %s\n", copied, dest);
    
    return 0;
}
*/