/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:23:43 by mmohamme          #+#    #+#             */
/*   Updated: 2021/10/13 19:25:18 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	size_total(char **strs, char *sep, int size)
{
	int	i;
	int	tlen;

	i = 0;
	tlen = 0;
	while (i < size)
	{
		tlen += ft_strlen(strs[i]);
		i++;
	}
	tlen += ft_strlen(sep) * (size - 1);
	return (tlen);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{	
	int		i;
	int		k;
	char	*s;

	s = NULL;
	i = 0;
	if (size == 0)
	{
		s = malloc(sizeof(char));
		s[0] = 0;
		return (s);
	}
	k = size_total(strs, sep, size);
	s = (char *) malloc(sizeof(char) * (k + 1));
	if (!s)
		return (NULL);
	s[0] = '\0';
	while (i < size)
	{
		ft_strcat(s, strs[i]);
		if (i < size - 1)
			ft_strcat(s, sep);
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char	*p[3];
	char	*str;

	p[0] = "abc";
	p[1] = "efg";
	p[2] = "ijk";
	str = ft_strjoin(3, p, " ");
	printf("%s", str);
}
*/
