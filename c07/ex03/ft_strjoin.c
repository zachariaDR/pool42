/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 05:40:23 by zadriouc          #+#    #+#             */
/*   Updated: 2023/08/01 00:40:28 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src, int index)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[index] = src[i];
		i++;
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_vol(int size, char **strs, char *sep)
{
	int	totallen;
	int	i;

	totallen = 0;
	i = 0;
	while (i < size)
	{
		totallen += ft_strlen(strs[i]);
		if (i != size - 1)
			totallen += ft_strlen(sep);
		i++;
	}
	return (totallen + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total;
	int		i;
	int		j;
	char	*concat;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	total = ft_vol(size, strs, sep);
	concat = (char *)malloc(total * sizeof(char));
	if (!concat)
		return (0);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(concat, strs[i], j);
		j = j + ft_strlen(strs[i]);
		if (i != (size - 1))
		{
			ft_strcpy(concat, sep, j);
			j += ft_strlen(sep);
		}
		i++;
	}
	return (concat);
}
