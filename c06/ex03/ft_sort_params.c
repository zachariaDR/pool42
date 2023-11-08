/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 04:16:14 by zadriouc          #+#    #+#             */
/*   Updated: 2023/07/27 04:33:56 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_sort(char **mat, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(mat[i], mat[j]) > 0)
				ft_swap(mat + i, mat + j);
			j++;
		}
		i++;
	}
}

int	main(int counter, char **matrix)
{
	int	i;

	ft_sort(matrix, counter);
	i = 1;
	while (i < counter)
	{
		ft_putstr(matrix[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
