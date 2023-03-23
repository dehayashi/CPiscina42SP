/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhayashi <dhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:57:38 by dhayashi          #+#    #+#             */
/*   Updated: 2023/03/12 16:31:20 by dhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	numbers;

	numbers = '0';
	while (numbers <= '9')
	{
		write(1, &numbers, 1);
		numbers++;
	}
}
