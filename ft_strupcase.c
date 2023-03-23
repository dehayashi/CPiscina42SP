/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhayashi <dhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:03:56 by dhayashi          #+#    #+#             */
/*   Updated: 2023/03/22 21:01:12 by dhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}

/*
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int main(void)
{
	char str[100] = "abcd-fsdAfddsSS";
	char cpy[100];
	char *ret;
	strcpy(cpy, str);

	printf("\"%s\": %s\n", str, ft_strupcase(cpy));

	ret = ft_strupcase(cpy);
	printf("Same string returned? %i\n", ret == cpy);
}
*/