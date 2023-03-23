/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhayashi <dhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:22:11 by dhayashi          #+#    #+#             */
/*   Updated: 2023/03/18 15:02:40 by dhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}		
/*
#include <unistd.h>

int main (void)
{
	int a = '5';
	int b = '7';
	ft_swap(&a, &b);
	write(1, &a, 1);
	write(1, &b, 1);
}
*/
