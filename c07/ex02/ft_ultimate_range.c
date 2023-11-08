/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 06:09:26 by zadriouc          #+#    #+#             */
/*   Updated: 2023/07/30 11:35:33 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;
	int	i;
	int	*elem;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	a = max - min;
	elem = malloc(a * sizeof(int));
	if (!elem)
	{
		*range = 0;
		return (-1);
	}
	*range = elem;
	i = 0;
	while (i < a)
	{
		elem[i] = min + i;
		i++;
	}
	return (a);
}
