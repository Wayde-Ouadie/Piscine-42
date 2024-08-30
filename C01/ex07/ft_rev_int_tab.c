/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:27:55 by oel-feng          #+#    #+#             */
/*   Updated: 2023/07/15 18:20:13 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	rev;
	int	n;

	n = 0;
	while (n < (size / 2))
	{
		rev = tab[n];
		tab[n] = tab[size - 1 - n];
		tab[size - 1 - n] = rev;
		n++;
	}
}
