/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:23:18 by marvin            #+#    #+#             */
/*   Updated: 2023/03/23 18:23:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <io.h>
#include <stdio.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_putnbr(int nb)
{
  unsigned  int nbr;
  if (nb < 0)
  {
    nbr = -nb;
    ft_putchar(-nbr);
  }
  else
    nbr = nb;
  if (nbr > 9)
  {
    ft_putnbr(nbr / 10 );
    ft_putnbr(nbr % 10 );
  }
  else
    ft_putchar(nbr + 48);

}

int   main()
{
   ft_putnbr(900);

    return 0;
}