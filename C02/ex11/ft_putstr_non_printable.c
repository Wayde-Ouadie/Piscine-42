/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:22:11 by oel-feng          #+#    #+#             */
/*   Updated: 2023/07/20 20:46:18 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int		i;
	int		div;
	int		mod;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			div = str[i] / 16;
			mod = str[i] % 16;
			ft_putchar('\\');
			ft_putchar(hex[div]);
			ft_putchar(hex[mod]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
