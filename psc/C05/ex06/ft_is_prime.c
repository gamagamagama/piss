/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:26:18 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/25 20:08:18 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	x;

	i = 2;
	while (i < nb)
	{
		x = (nb % i);
		if (x == 0)
		{
			return (0);
		}
		++i;
	}
	if (nb <= 1)
	{
		return (0);
	}
	return (1);
}

// int main()
// {
// 	int numb = 11;
// 	printf("%d", ft_is_prime(numb));
// 	return(0);
// }