/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:42:12 by mgaudin           #+#    #+#             */
/*   Updated: 2024/08/21 11:46:06 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (res < nb)
	{
		i = i + 1;
		res = i * i;
	}
	if (res == nb)
		return (i);
	else
		return (0);
}
