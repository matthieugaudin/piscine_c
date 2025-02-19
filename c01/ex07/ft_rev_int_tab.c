/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:30:09 by mgaudin           #+#    #+#             */
/*   Updated: 2024/08/10 19:10:33 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_reverse(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		ft_reverse(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
