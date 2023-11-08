/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 05:32:22 by zadriouc          #+#    #+#             */
/*   Updated: 2023/07/30 05:05:18 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*elem;

	if (min >= max)
		return (0);
	range = max - min;
	elem = malloc(range * sizeof(int));
	if (!elem)
		return (0);
	i = 0;
	while (i < range)
	{
		elem[i] = min + i;
		i++;
	}
	return (elem);
}
