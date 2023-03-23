/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhayashi <dhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:52:34 by dhayashi          #+#    #+#             */
/*   Updated: 2023/03/22 21:07:06 by dhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 97 || *str > 122)
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("\"abz\": %i\n", ft_str_is_lowercase("abz"));
	printf("\"ab{\": %i\n", ft_str_is_lowercase("ab{"));
	printf("\"ab`\": %i\n", ft_str_is_lowercase("ab`"));
	printf("\"\": %i\n", ft_str_is_lowercase(""));
	printf("\"asdasda..\": %i\n", ft_str_is_lowercase("asdasda.."));
	printf("\"asdasAa\": %i\n", ft_str_is_lowercase("asdasAa"));
}
*/