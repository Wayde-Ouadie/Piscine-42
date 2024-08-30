/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:03:37 by oel-feng          #+#    #+#             */
/*   Updated: 2023/08/03 15:37:00 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_exist(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strslen(char *str, char *charset)
{
	int	counter;
	int	neww;
	int	i;

	i = 0;
	neww = 1;
	counter = 0;
	while (str[i])
	{
		if (ft_exist(str[i], charset) == 0 && neww)
		{
			counter++;
			neww = 0;
		}
		else if (ft_exist(str[i], charset) == 1)
			neww = 1;
		i++;
	}
	return (counter);
}

char	*ft_strdup(char *src, char *charset)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	i = 0;
	while (src[i] && ft_exist(src[i], charset) == 0)
	{
		len++;
		i++;
	}
	dest = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	while (src[i] && len > 0)
	{
		dest[i] = src[i];
		i++;
		len--;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		len;
	int		i;
	int		j;
	int		neww;
	char	**strs;

	i = 0;
	j = 0;
	neww = 1;
	len = ft_strslen(str, charset);
	strs = (char **)malloc((len + 1) * sizeof(*strs));
	while (str[i])
	{
		if (ft_exist(str[i], charset) == 0 && neww)
		{
			neww = 0;
			strs[j++] = ft_strdup(&str[i], charset);
		}
		else if (ft_exist(str[i], charset) == 1)
			neww = 1;
		i++;
	}
	strs[j] = 0;
	return (strs);
}

/*int	main(int ac, char **av)
{
	int		i;
	char	**strs;

	if (ac == 3)
	{
		strs = ft_split(av[1], av[2]);
		i = 0;
		while (strs[i])
		{
			printf("%s\n", strs[i]);
			i++;
		}
	}
}*/
