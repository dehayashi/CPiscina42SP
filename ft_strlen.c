/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhayashi <dhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:31:21 by dhayashi          #+#    #+#             */
/*   Updated: 2023/03/18 18:01:10 by dhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
/*
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char str[] = "Hello, world!";
    int len = ft_strlen(str);
    printf("The length of the string is %d\n", len);
    return 0;
}
*/
