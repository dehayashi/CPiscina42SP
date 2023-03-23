/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhayashi <dhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:11:41 by dhayashi          #+#    #+#             */
/*   Updated: 2023/03/22 21:02:06 by dhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 127 || *str > 0)
			return (0);
		str++;
	}
	return (1);
}
/*
#include <ctype.h>
#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
	int c;
	int i = 0;
	char str[150];

	for (c = 1; c <= 127; ++c)
		if (isprint(c) != 0)
			str[i++] = c;

	printf("\"\": %i\n", ft_str_is_printable(""));
	printf("\"%s\": %i\n", str, ft_str_is_printable(str));
	printf("with a tab: %i\n", ft_str_is_printable("fs\ts"));

	str[0] = 31;
	str[10] = '\0';
	printf("With the character just before: %i\n", ft_str_is_printable(str));

	str[0] = 127;
	str[10] = '\0';
	printf("With the character just after: %i\n", ft_str_is_printable(str));
}
*/