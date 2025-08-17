/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 23:08:35 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/11 12:31:16 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	swaper;

	index = 0;
	swaper = 1;
	while (swaper)
	{
		swaper = 0;
		index = 0;
		while (index < size -1)
		{
			if (tab[index] > tab[index + 1])
			{
				ft_swap(&tab[index], &tab[index + 1]);
				swaper = 1;
			}
			index++;
		}
	}
}

/*
int main()
{
    int i = 0;
    int my_array[] = {1, 6, 8, 4, 2};
    int size = *(&my_array + 1) - my_array;

    ft_sort_int_tab(my_array, size);

    printf("sorted : ");
    while (i < size) {
        printf("%d ", my_array[i]);
        i++;
    }

    return 0;
}
*/

/*
printf("values of a :%d \n", *a);
printf("values of b :%d \n", *b);

int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
printf("swaped values of a :%d \n", *a);
printf("swaped values of b :%d \n", *b);
*/