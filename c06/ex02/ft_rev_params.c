/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 00:18:05 by zadriouc          #+#    #+#             */
/*   Updated: 2023/07/27 01:03:59 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int counter, char **matrix)
{
	int	i;
	int	j;

	i = counter - 1;
	j = 0;
	while (i > 0)
	{
		j = 0;
		while (matrix[i][j])
		{
			write(1, &matrix[i][j], 1);
			j++;
		}
		i--;
		write(1, "\n", 1);
	}
}
