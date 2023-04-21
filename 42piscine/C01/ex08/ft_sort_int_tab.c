/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:59:55 by marvin            #+#    #+#             */
/*   Updated: 2023/04/05 16:59:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		tamp;

	tamp = *a;
	*a = *b;
	*b = tamp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;

	i = 0;
	while (i < size - 1 && tab[i + 1] != '\0' && tab[i] != '\0')
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}