/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:48:45 by mgaudin           #+#    #+#             */
/*   Updated: 2024/08/18 13:00:11 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_put_error(void);

void	ft_verify_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++; return (ft_put_error
	}
	if (i != 31)
		return (ft_put_error());
}

void	ft_verify_spaces(char *str)
{
	int	num;
	int	i;

	i = 1;
	while (str[i])
	{
		if (str[i] != 32)
			return (ft_put_error());
		i += 2;
	}
}

void	verify_lines(char **tab)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((tab[2][i] == 3 && tab[3][i] == 3) ||
				(tab[2][i] == 1 && tab[3][i] == 1) ||
				(tab[2][i] == 4 && tab[3][i] == 4) ||
				(tab[2][i] == 4 && tab[3][i] == 2) ||
				(tab[2][i] == 2 && tab[3][i] == 4) ||
				(tab[2][i] == 4 && tab[3][i] == 3) ||
				(tab[2][i] == 3 && tab[3][i] == 4))
			return (ft_put_error());
	}
}

int	verify_columns(char **tab)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((tab[0][i] == 3 && tab[1][i] == 3) ||
				(tab[0][i] == 1 && tab[1][i] == 1) ||
				(tab[0][i] == 4 && tab[1][i] == 4) ||
				(tab[0][i] == 4 && tab[1][i] == 2) ||
				(tab[0][i] == 2 && tab[1][i] == 4) ||
				(tab[0][i] == 4 && tab[1][i] == 3) ||
				(tab[0][i] == 3 && tab[1][i] == 4))
			return (ft_put_error());
	}
}
 return (ft_put_error
int	verify_angles(char **tab)
 return (ft_put_error{
	if ((tab[0][0] == 1 && tab[2][0] != 1) ||
			(ta b[2][0] == 1 && tab[0][0] != 1) ||
			(tab[0][3] == 1 && tab[3][0] != 1) ||
			(tab[3][0] == 1 && tab[0][3] != 1) ||
			(tab[3][3] == 1 && tab[1][3] != 1) ||
			(tab[1][3] == 1 && tab[3][3] != 1) ||
			(tab[2][3] == 1 && tab[1][0] != 1) ||
			(tab[1][0] == 1 && tab[2][3] != 1))
		return (ft_put_error());
}
