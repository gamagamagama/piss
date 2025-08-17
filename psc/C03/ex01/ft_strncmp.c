/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:55:07 by mgavorni          #+#    #+#             */
/*   Updated: 2023/09/25 18:24:59 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char string[] = "Ahoj";
// 	char string1[] = "Ahoj";
// 	char string2[] = "Ahuj";
// 	int lenght = 3;
// 	int length = 6;

// 	ft_strncmp(string, string2, length);
// 	return(0);
// }