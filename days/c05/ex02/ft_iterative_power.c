/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:58:57 by mgaudin           #+#    #+#             */
/*   Updated: 2024/08/22 14:11:38 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb;
	i = 0;
	while ((i + 1) < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
