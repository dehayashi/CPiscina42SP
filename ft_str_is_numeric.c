/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhayashi <dhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:20:56 by dhayashi          #+#    #+#             */
/*   Updated: 2023/03/22 17:20:52 by dhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 		printf("\"123\": %i\n", ft_str_is_numeric("123"));
//		printf("\"\": %i\n", ft_str_is_numeric(""));
// 		printf("\"1234567a89\": %i\n", ft_str_is_numeric("1234567a89"));
// }