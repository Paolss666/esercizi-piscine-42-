/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:18:03 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/07 10:18:03 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
  int i;

  i = nb;
  if (power < 0)
    return (0);
  if (power == 0)
    return (1);
  if (nb == 0)
    return (0);
  if (power == 1)
    return (nb);
  while (power > 1)
  {
    i = i * nb;
    power--;
  }
  return (i);
}