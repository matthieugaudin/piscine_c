/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_digits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugbrouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:33:46 by ugbrouar          #+#    #+#             */
/*   Updated: 2024/08/25 17:03:25 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_manage_two_digits(char *nb, char *dict)
{
	char	*res;

	if (nb[0] == '0')
		ft_putdict(ft_strstr(dict, &nb[1]));
	else if (nb[1] == '0' || (nb[1] >= '0' && nb[1] <= '9' && nb[0] == '1'))
		ft_putdict(ft_strstr(dict, &nb[0]));
	else
	{
		res = itoa(ft_atoi(&nb[0]) - ft_atoi(&nb[1]));
		ft_putdict(ft_strstr(dict, &res[0]));
		ft_putdict(ft_strstr(dict, &nb[1]));
	}
}

void	ft_manage_digits(char *nb, char *dict)
{
	char	*res;

	if (ft_strlen(nb) == 0 || ft_strlen(nb) > 3)
		write(1, "Error", 5);
	else if (ft_strlen(nb) == 1)
		ft_putdict(ft_strstr(dict, &nb[0]));
	else if (ft_strlen(nb) == 2)
	{
		if (nb[1] == '0' || (nb[1] >= '0' && nb[1] <= '9' && nb[0] == '1'))
			ft_putdict(ft_strstr(dict, &nb[0]));
		else
			ft_manage_two_digits(nb, dict);
	}
	else if (ft_strlen(nb) == 3)
	{
		if (nb[0] != '0' || nb[1] != '0' || nb[2] != '0')
		{
			if (nb[0] == '0' && nb[1] != '0')
				ft_manage_two_digits(&nb[1], dict);
			else if (nb[0] == '0' && nb[1] == '0')
				ft_putdict(ft_strstr(dict, &nb[2]));
			else
			{
				res = itoa(ft_atoi(&nb[0]) / 100);
				ft_putdict(ft_strstr(dict, &res[0]));
				ft_putdict(ft_strstr(dict, "100"));
				if (nb[1] != '0' || nb[2] != '0')
					ft_manage_two_digits(&nb[1], dict);
			}
		}
	}
}
