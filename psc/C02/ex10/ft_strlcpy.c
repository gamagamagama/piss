/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:48:36 by mgavorni          #+#    #+#             */
/*   Updated: 2025/08/17 23:26:12 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> // Included for demonstration, not needed for the function itself

// This function copies up to 'size - 1' characters from 'src' to 'dest', null-terminates dest, and returns the length of src
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size) // Takes destination, source, and size as input
{
    // Declare variables for the length of src and a loop counter
	unsigned int	src_len;
	unsigned int	i;

    // Initialize src_len and i to 0
	src_len = 0;
	i = 0;
    // Calculate the length of the source string
	while (src[src_len] != '\0')
	{
		src_len++;
	}
    // If size is 0 or dest is NULL, return the length of src and do nothing else
	if (size == 0 || dest == NULL)
	{
		return (src_len);
		// src_len = 0; // This line is unreachable and can be removed
	}
    // Copy characters from src to dest until reaching size - 1 or end of src
	while (i < size -1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
    // Null-terminate the destination string
	dest[i] = '\0';
    // Return the length of the source string
	return (src_len);
}

/*
int main() {
    char dest[10];
    char *src = "Hello, World!";
    
    unsigned int copied = ft_strlcpy(dest, src, sizeof(dest));
    
    printf("Copied %u characters: %s\n", copied, dest);
    
    return 0;
}
*/