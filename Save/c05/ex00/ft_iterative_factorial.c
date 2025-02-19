/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:37:46 by mgaudin           #+#    #+#             */
/*   Updated: 2024/08/20 13:12:23 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	res = nb;
	while (nb != 1)
	{
		nb -= 1;
		res = res * nb;
	}
	return (res);
}
