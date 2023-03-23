/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhayashi <dhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:50:57 by dhayashi          #+#    #+#             */
/*   Updated: 2023/03/13 12:23:08 by dhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int w)
{	
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &w, 1);
	if (x != '7' || y != '8' || w != '9')
	{	
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)

{	
	int	x;
	int	y;
	int	w;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			w = y + 1;
			while (w <= '9')
			{	
				ft_putchar(x, y, w);
				w++;
			}
			y++;
		}
		x++;
	}
}
