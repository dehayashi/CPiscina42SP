/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhayashi <dhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:11:49 by josupere          #+#    #+#             */
/*   Updated: 2023/03/06 09:02:04 by dhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top_bottom_row(int x)
{
	ft_putchar ('o');
	x = x - 1;
	if (x == 0)
	{
		ft_putchar ('\n');
	}
	while (x != 1 && x != 0)
	{
		ft_putchar ('-');
		x = x - 1;
	}
	if (x == 1)
	{
		ft_putchar ('o');
		ft_putchar ('\n');
	}
}

void	middle_row(int x)
{
	ft_putchar ('|');
	x = x - 1;
	if (x == 0)
	{
		ft_putchar ('\n');
	}
	while (x != 1 && x != 0)
	{
		ft_putchar (' ');
		x = x - 1;
	}
	if (x == 1)
	{
		ft_putchar ('|');
		ft_putchar ('\n');
	}
}

int	rush(int x, int y)
{
	if (y <= 0 || x <= 0)
	{
		return (0);
	}
	top_bottom_row (x);
	y = y - 1;
	while (y != 1 && y != 0)
	{
		middle_row (x);
		y = y - 1;
	}
	if (y == 1)
	{
		top_bottom_row (x);
	}
	return (0);
}
