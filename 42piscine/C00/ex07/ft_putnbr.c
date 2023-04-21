/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:00:04 by marvin            #+#    #+#             */
/*   Updated: 2023/04/04 18:00:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <io.h> // #include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_putnbr(int nb)
{
  unsigned int  nbr;

  if (nb < 0)
  {
    ft_putchar('-');
    nbr = -nb;
  }
  else
    nbr = nb;
  if (nbr > 9)
  {
    ft_putnbr(nbr / 10);
    ft_putnbr(nbr % 10);
  }
  else
    ft_putchar(nbr + 48);
}