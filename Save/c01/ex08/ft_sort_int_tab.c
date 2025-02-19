/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:32:36 by mgaudin           #+#    #+#             */
/*   Updated: 2024/08/11 18:59:22 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_sorted(int *tab, int size)
{
	int	i;

	i = 0;
	while (i <= (size - 2))
	{
		if (tab[i] > tab[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = i + 1;
	while (is_sorted(tab, size) != 0)
	{
		if (tab[i] > tab[j])
		{
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
		}
		i ++;
		j++;
	}
}

int main(void)
{
	int tab[] = {1, 8, 5, 9 };
	ft_sort_int_tab(tab, 4);
	printf("%d %d %d %d", tab[0], tab[1], tab[2], tab[3]);
}
