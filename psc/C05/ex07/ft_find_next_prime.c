/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:25:15 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/26 13:49:18 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	x;

	i = 2;
	while (i < nb && i <= 46340)
	{
		x = (nb % i);
		if (x == 0)
		{
			++nb;
			i = 1;
		}
		++i;
	}
	while (nb <= 1)
	{
		++nb;
		i = 2;
	}
	return (nb);
}

// int main()
// {
// 	int numb = ;
// 	printf("%d",  ft_find_next_prime(numb));
// 	return(0);
// }