/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:57:31 by oel-feng          #+#    #+#             */
/*   Updated: 2023/07/27 12:53:02 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_concatenate(int size, char **strs, char *sep, char *res)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	c = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != '\0')
			res[c++] = strs[a][b++];
		b = 0;
		while (sep[b] != '\0' && a < size - 1)
			res[c++] = sep[b++];
		a++;
	}
	res[c] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		len;
	int		i;

	len = 0;
	i = 0;
	if (size == 0)
	{
		res = (char *)malloc(sizeof(char));
		*res = '\0';
		return (res);
	}
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += (ft_strlen(sep) * (size - 1)) + 1;
	res = (char *)malloc(len * sizeof(char));
	if (!res)
		return (0);
	res = ft_concatenate(size, strs, sep, res);
	return (res);
}

/*int	main()
{
	char *strs[] = {"hello", "world" , "test"};
	char *sep;
	char *res;

	sep = " ,";
	res = ft_strjoin(3, strs, sep);
	printf("%s \n", res);
}*/
