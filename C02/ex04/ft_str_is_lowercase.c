/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:33:52 by mmohamme          #+#    #+#             */
/*   Updated: 2021/09/27 11:51:02 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lowercase(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int	ft_str_is_lowercase(char *str)
{
	if (lowercase(str))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
