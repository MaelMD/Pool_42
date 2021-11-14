/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:42:10 by mmohamme          #+#    #+#             */
/*   Updated: 2021/09/26 18:44:42 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	uppercase(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
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

int	ft_str_is_uppercase(char *str)
{
	if (uppercase(str))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
