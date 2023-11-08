/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 00:18:05 by zadriouc          #+#    #+#             */
/*   Updated: 2023/07/27 00:56:44 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int counter, char **matrix)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < counter)
	{
		j = 0;
		while (matrix[i][j])
		{
			write(1, &matrix[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
