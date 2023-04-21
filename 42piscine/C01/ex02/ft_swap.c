/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:38:05 by marvin            #+#    #+#             */
/*   Updated: 2023/04/05 16:38:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <io.h>

void  ft_swap(int *a, int *b)
{
  int tamp;

  tamp = *a;
  *a = *b;
  *b = tamp;
}