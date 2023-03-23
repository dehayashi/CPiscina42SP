/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhayashi <dhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:58:43 by dhayashi          #+#    #+#             */
/*   Updated: 2023/03/22 21:07:24 by dhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 65 || *str > 90)
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("\"ABZ\": %i\n", ft_str_is_uppercase("ABZ"));
	printf("\"AB@\": %i\n", ft_str_is_uppercase("AB@"));
	printf("\"AB[\": %i\n", ft_str_is_uppercase("AB["));
	printf("\"\": %i\n", ft_str_is_uppercase(""));
	printf("\"DASFJET..\": %i\n", ft_str_is_uppercase("ADASFJET.."));
}
*/