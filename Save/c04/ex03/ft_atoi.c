/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:36:44 by mgaudin           #+#    #+#             */
/*   Updated: 2024/08/20 19:34:51 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	res;

	i = 0;
	res = 0;
	count = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i = i + 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (count % 2 == 1)
		return (-res);
	return (res);
}
