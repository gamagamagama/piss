/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:30:54 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/11 12:22:18 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	last;
	int	temp;

	start = 0;
	last = size -1;
	while (start < last)
	{
		temp = tab[start];
		tab[start] = tab[last];
		tab[last] = temp;
		start++;
		last--;
	}
}

/*
int main()
{
	int i = 0;
    int my_array[] = {1, 2, 3, 4, 5};
	int size = *(&my_array + 1) - my_array;

    ft_rev_int_tab(my_array, size);

    printf("Reversed : ");
    while (i < size) {
        printf("%d ", my_array[i]);
		i++;
    }

    return 0;
}
*/