/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:59:04 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/26 14:10:02 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i <= nb && i <= 46340)
	{
		if (i * i == nb)
		{
			return (i);
		}
		++i;
	}
	return (0);
}

// int main ()
// {
// 	int num = 2147483647;
// 	printf("%d\n", ft_sqrt(num));
// 	return(0);
// }