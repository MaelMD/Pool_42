/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:31:11 by mmohamme          #+#    #+#             */
/*   Updated: 2021/09/30 17:35:35 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	strstrlen(char *mot)
{
	int	i;

	i = 0;
	while (mot[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	n2;
	unsigned int	res;

	n = strstrlen(src);
	n2 = strstrlen(dest);
	if (size < n2)
		res = n + size;
	else
		res = n + n2;
	if (n == 0 || size == 0)
		return (res);
	i = 0;
	while (src[i] && n2 + i < size - 1)
	{
		dest[n2 + i] = src[i];
		i++;
	}
	dest[n2 + i] = '\0';
	return (res);
}
