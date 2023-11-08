/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:40:51 by zadriouc          #+#    #+#             */
/*   Updated: 2023/07/27 05:31:43 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int counter, char **matrix)
{
	int	j;

	j = 0;
	(void)counter;
	while (matrix[0][j])
	{
		write(1, &matrix[0][j], 1);
		j++;
	}
	write(1, "\n", 1);
}
