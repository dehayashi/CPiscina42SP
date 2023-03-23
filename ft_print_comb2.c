/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhayashi <dhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 12:40:36 by dhayashi          #+#    #+#             */
/*   Updated: 2023/03/12 16:30:24 by dhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b)
{
	char	pair[5];

	pair[0] = '0' + (a / 10);
	pair[1] = '0' + (a % 10);
	pair[2] = ' ';
	pair[3] = '0' + (b / 10);
	pair[4] = '0' + (b % 10);
	write(1, pair, 5);
	if (a != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	one_pair;
	int	two_pair;

	one_pair = 0;
	while (one_pair < 100)
	{
		two_pair = one_pair + 1;
		while (two_pair < 100)
		{
			ft_putchar(one_pair, two_pair);
			two_pair++;
		}
		one_pair++;
	}
}
