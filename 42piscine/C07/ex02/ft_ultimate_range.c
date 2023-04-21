/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:08:26 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/07 12:08:26 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h>
#include <stdlib.h>

int  ft_ultimate_range(int **range, int min, int max)
{
  int   *tab;
  long  size;
  long  i;

  i = 0;
  size = max - min;
  if (min >= max)
  {
    *tab = NULL;
    return (0);
  }
  if (!(tab = (int *)malloc(sizeof(int) * size)))
    return (-1);
  while (min < max)
  {
    tab[i] = min;
    i++;
    min++;
  }
  *range = tab;
  return (i);
}