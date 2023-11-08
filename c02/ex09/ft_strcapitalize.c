/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 09:03:04 by zadriouc          #+#    #+#             */
/*   Updated: 2023/07/22 20:52:06 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 'Z' && str[i] >= 'A') != 1)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = *(str + i) + 'a' - 'A';
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (!(str[i] <= 'Z' && str[i] >= 'A')
			&& !(str[i] <= 'z' && str[i] >= 'a')
			&& !(str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
				str[i + 1] -= 32;
		}
		else if (i == 0)
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
