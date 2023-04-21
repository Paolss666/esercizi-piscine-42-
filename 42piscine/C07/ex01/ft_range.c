/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:03:15 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/07 12:03:15 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
  int   *tab;
  long  size;
  long  i;

  i = 0;
  size = max - min;
  if (min >= max)
    return (0);
  tab = (int *)malloc(sizeof(int) * size);
  if (!(tab))
    return (NULL);
  while (min < max)
  {
    tab[i] = min;
    i++;
    min++;
  }
  return (tab);
}