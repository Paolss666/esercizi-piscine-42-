/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:56:23 by marvin            #+#    #+#             */
/*   Updated: 2023/04/05 16:56:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void  ft_rev_int_tab(int  *tab, int size)
{
  int i;
  int tamp;

  i = 0;
  while (i < size - 1)
  {
    tamp = tab[i];
    tab[i] = tab[size - 1];
    tab[size - 1] = tamp;
    i++;
    size--;
  }
}