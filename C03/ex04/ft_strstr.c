/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 09:39:51 by mmohamme          #+#    #+#             */
/*   Updated: 2021/09/30 14:27:57 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = 0;
	if (*to_find == '\0')
		return (str);
	while (str[c1] != '\0')
	{
		c2 = 0;
		while (str[c1 + c2] == to_find[c2])
		{
			if (to_find[c2 + 1] == '\0')
				return (&str[c1]);
			c2++;
		}
		c1++;
	}
	return (0);
}
