/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:42:31 by mgaudin           #+#    #+#             */
/*   Updated: 2024/08/19 20:10:29 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 1);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb <= 9 && nb >= 0)
	{
		ft_putchar(nb + '0');
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_print_comb2(void)
{
	int	s1;
	int	s2;

	s1 = 0;
	s2 = 1;
	while (s1 <= 98)
	{
		while (s2 <= 99)
		{
			if (s1 < 10)
				ft_putchar('0');
			ft_putnbr(s1);
			ft_putchar(' ');
			if (s2 < 10)
				ft_putchar('0');
			ft_putnbr(s2);
			if (s1 != 98)
				write(1, ", ", 2);
			s2++;
		}
		s2 = s1 + 2;
		s1++;
	}
}
