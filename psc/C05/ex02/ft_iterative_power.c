/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:01:52 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/25 19:09:12 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

// int main()
// {
// 	int a = 2;
// 	int res = 30;
// 	int rezult = ft_iterative_power(a,res);
// 	printf("%d", rezult);
// 	return(0);
// }