/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaudin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 14:45:25 by mgaudin           #+#    #+#             */
/*   Updated: 2024/08/10 15:21:31 by mgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void ft_putchar(char c);

void ft_display_c(void)
{
	ft_putchar('A');
}

void ft_display_x(int x)
{
	int	count;

	ft_putchar('A');
	count = 0;
	while (count < (x - 2))
	{
		ft_putchar('B');
		count++;
	}
	ft_putchar('C');
}

void ft_display_y(int y)
{
        int     count;

        ft_putchar('A');
        ft_putchar('\n');
        count = 0;
        while (count < (y - 2))
        {
                ft_putchar('B');
        	ft_putchar('\n');
                count++;
        }
        ft_putchar('A');
}

void ft_display_all(int x, int y)
{
	int	count_line;
	int	count_col;

	ft_display_x(x);
	ft_putchar('\n');
	count_line = 0;
	while (count_line < (y - 2))
	{
		ft_putchar('B');
		count_col = 0;
		while (count_col < (x - 2))
		{
			ft_putchar(' ');
			count_col++;
		}
		ft_putchar('B');
		ft_putchar('\n');
		count_col = 0;
		count_line++;
	}
	ft_display_x(x);
}

void rush(int x, int y)
{
	if (x == 1 && y == 1)
		ft_display_c();
	else if (x > 1 && y == 1)
		ft_display_x(x);
	else if (y > 1 && x == 1)
		ft_display_y(y);
	else
		ft_display_all(x, y);
}
