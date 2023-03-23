/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhayashi <dhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:04:38 by dhayashi          #+#    #+#             */
/*   Updated: 2023/03/22 20:30:17 by dhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
			return (0);
		str++;
	}
	return (1);
}
// #include <stdio.h>

// int	ft_str_is_alpha(char *str);

// int main(void)
// {
// printf("\"abc\": %i\n", ft_str_is_alpha("abc"));
// printf("\"\": %i\n", ft_str_is_alpha(""));
// printf("\"abcdasda1d\": %i\n", ft_str_is_alpha("abcdasda1d"));
// }