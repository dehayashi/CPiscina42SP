/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhayashi <dhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:59:44 by dhayashi          #+#    #+#             */
/*   Updated: 2023/03/18 15:21:46 by dhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int a = 17;
    int b = 5;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);

    printf("a = %d, b = %d\n", a, b);
    printf("div = %d, mod = %d\n", div, mod);

    return 0;
}
*/