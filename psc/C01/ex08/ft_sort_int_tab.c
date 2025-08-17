/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 23:08:35 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:11:40 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function swaps the values of two integers using pointers
void	ft_swap(int *a, int *b) // Takes pointers to two integers as input
{
    // Declare a temporary variable to help with swapping
	int	temp;

    // Store the value pointed to by 'a' in 'temp'
	temp = *a;
    // Set the value pointed to by 'a' to the value pointed to by 'b'
	*a = *b;
    // Set the value pointed to by 'b' to the value stored in 'temp'
	*b = temp;
}

// This function sorts an array of integers in ascending order using bubble sort
void	ft_sort_int_tab(int *tab, int size) // Takes a pointer to an array and its size as input
{
    // Declare variables for the current index and a flag to check if a swap happened
	int	index;
	int	swaper;

    // Start with index 0
	index = 0;
    // Set swaper to 1 to enter the loop
	swaper = 1;
    // Repeat the process as long as a swap happened in the previous pass
	while (swaper)
	{
        // Set swaper to 0 at the start of each pass
		swaper = 0;
        // Start from the beginning of the array
		index = 0;
        // Go through the array up to the second-to-last element
		while (index < size -1)
		{
            // If the current element is greater than the next, swap them
			if (tab[index] > tab[index + 1])
			{
				ft_swap(&tab[index], &tab[index + 1]);
                // Set swaper to 1 to indicate a swap happened
				swaper = 1;
			}
            // Move to the next element
			index++;
		}
	}
}

/*
// Example usage:
// int main()
// {
//     int i = 0;
//     int my_array[] = {1, 6, 8, 4, 2};
//     int size = *(&my_array + 1) - my_array;
//
//     ft_sort_int_tab(my_array, size); // This will sort the array in ascending order
//
//     printf("sorted : ");
//     while (i < size) {
//         printf("%d ", my_array[i]);
//         i++;
//     }
//
//     return 0;
// }
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