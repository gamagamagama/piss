/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:36:39 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/25 19:11:46 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index -2)));
	}
}

// int main()
// {
// 	int in = 5;
// 	int res;
// 	res = ft_fibonacci(in);
// 	printf("index:%d holds value: %d in fibonacci", in, res);
// 	return(0);
// }