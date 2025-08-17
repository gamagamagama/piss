/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:45:10 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/16 13:10:53 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_converter(char x, char *hex)
{
	char	*hexchar;

	hexchar = "0123456789abcdef";
	hex[0] = hexchar[(x >> 4) & 0xF];
	hex[1] = hexchar[x & 0xF];
	hex[2] = '\0';
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex1[3];
	int		i;

	hex1[0] = '\0';
	hex1[1] = '\0';
	hex1[2] = '\0';
	i = 0;
	while (str[i] <= 127 && str[i] >= 1)
	{
		if ((str[i] < 32 || str[i] > 126))
		{
			ft_converter(str[i], hex1);
			write(1, "\\", 1);
			write(1, hex1, 2);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

/*
int	main(void)
{
	char	string[] = "Coucou\ntu vas bien\aahoj\bcau\emajsa\fnazdar ?";

	ft_putstr_non_printable(string);

	return (0);
}
*/