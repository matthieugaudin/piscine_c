/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:19:41 by mgaudin           #+#    #+#             */
/*   Updated: 2024/08/29 13:52:44 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	array = malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (-1);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (i);
}
