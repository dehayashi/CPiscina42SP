/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhayashi <dhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:33:10 by dhayashi          #+#    #+#             */
/*   Updated: 2023/03/18 16:30:43 by dhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	len++;
	write(1, str, len);
}

/*
int main(void)
{
    ft_putstr("Hello, world!\n");
    return 0;
}
*/