/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:23:09 by mmohamme          #+#    #+#             */
/*   Updated: 2021/09/27 11:46:57 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	numeric(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
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

int	ft_str_is_numeric(char *str)
{
	if (numeric(str))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
