/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:30:54 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:11:08 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function reverses the order of elements in an integer array
void	ft_rev_int_tab(int *tab, int size) // Takes a pointer to an array and its size as input
{
    // Declare variables for the start and end positions, and a temporary variable for swapping
	int	start;
	int	last;
	int	temp;

    // Start at the beginning of the array
	start = 0;
    // Set 'last' to the index of the last element
	last = size -1;
    // Loop until the start index meets or passes the last index
	while (start < last)
	{
        // Store the value at the start index in 'temp'
		temp = tab[start];
        // Copy the value at the last index to the start index
		tab[start] = tab[last];
        // Copy the value from 'temp' to the last index
		tab[last] = temp;
        // Move the start index forward
		start++;
        // Move the last index backward
		last--;
	}
}

/*
// Example usage:
// int main()
// {
//     int i = 0;
//     int my_array[] = {1, 2, 3, 4, 5};
//     int size = *(&my_array + 1) - my_array;
//
//     ft_rev_int_tab(my_array, size); // This will reverse the array
//
//     printf("Reversed : ");
//     while (i < size) {
//         printf("%d ", my_array[i]);
//         i++;
//     }
//
//     return 0;
// }
*/