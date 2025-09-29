/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:46:21 by mgaudin           #+#    #+#             */
/*   Updated: 2024/08/29 13:44:35 by mgaudin          ###   ########.fr       */
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

int	ft_strlen_all(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	total_len;

	total_len = 0;
	i = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
			j++;
		i++;
		total_len += j;
	}
	total_len += i;
	total_len += ft_strlen(sep) * (size - 1);
	return (total_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = 0;
	len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		count;
	char	*result;

	if (size <= 0)
	{
		result = malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	total_len = 0;
	total_len = ft_strlen_all(size, strs, sep);
	result = malloc((total_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '\0';
	count = 0;
	while (count < size)
	{
		ft_strcat(result, strs[count]);
		if (count < size - 1)
			ft_strcat(result, sep);
		count++;
	}
	return (result);
}
