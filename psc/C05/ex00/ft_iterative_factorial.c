/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:41:38 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/25 19:22:15 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		i *= nb;
		--nb;
	}
	return (i);
}

// 
// int main()
// {
//     int a = 5;
//     int result = ft_iterative_factorial(a);
//     printf("Factorial of %d is %d\n", a, result);
//     return 0;
// }