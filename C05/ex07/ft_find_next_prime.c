/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:32:58 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/07 10:32:58 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
  int i;

  i = 3;
  if (nb == 2)
    return (1);
  if (nb < 0 || nb == 1 || nb % 2 == 0)
    return (0);
  while (i < nb && i < 46340)
  {
    if (nb % i == 0)
      return (0);
    i += 2;
  }
  return (1);
}

int ft_find_next_prime(int nb)
{
  if (nb <= 2)
    return (2);
  while (ft_is_prime(nb) == 0)
    nb++;
  return (nb);
}