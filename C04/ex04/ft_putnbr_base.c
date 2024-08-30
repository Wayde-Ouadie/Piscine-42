/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:44:34 by oel-feng          #+#    #+#             */
/*   Updated: 2023/08/03 19:01:20 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	basecheck(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		if (str[i] == '+' || str[i] == '-'
			|| (0 <= str[i] && str[i] <= 32) || str[i] == 127)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	base_recu(int nbr, char *base, int len)
{
	if (nbr / len)
		base_recu((nbr / len), base, len);
	write(1, &base[nbr % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = 0;
	if (basecheck(base) != 1 && ft_strlen(base) > 1)
	{
		len = ft_strlen(base);
		if (nbr >= 0)
		{
			if (nbr / len)
				base_recu((nbr / len), base, len);
			write(1, &base[nbr % len], 1);
		}
		else
		{
			write(1, "-", 1);
			if (nbr / len)
				base_recu((nbr / -len), base, len);
			write(1, &base[(nbr % len) * -1], 1);
		}
	}
}

/*int	main()
{
	ft_putnbr_base(-2147483648, "01");
}*/
