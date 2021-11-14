/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 09:48:47 by mmohamme          #+#    #+#             */
/*   Updated: 2021/09/26 11:40:04 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	last_ind;
	int	ex;

	i = 0;
	last_ind = size - 1;
	while (i < (size / 2))
	{
		ex = tab[i];
		tab[i] = tab[last_ind];
		tab[last_ind] = ex;
		i++;
		last_ind--;
	}
}
