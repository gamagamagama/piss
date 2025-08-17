/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:16:02 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/10 20:12:29 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main()
{
    int a = 25;
    int b = 10;
    int division;
    int modulus;

    ft_div_mod(a, b, &division, &modulus);

    printf("Division : %d\n", division);
    printf("Modulus : %d\n", modulus);

    return 0;
}
*/