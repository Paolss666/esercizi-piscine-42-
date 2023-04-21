/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:07:45 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/07 10:07:45 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factoriel(int  nb)
{
  int i;

  i = 1;
  if (nb < 0)
    return (0);
  if (nb > 1)
    return (nb * ft_recursive_factoriel(nb - 1));
  return (1);
}