/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:47:51 by marvin            #+#    #+#             */
/*   Updated: 2023/04/05 16:47:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <io.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_putstr(char *str)
{
  int index;

  index = 0;
  while (str[index] != '\0')
  {
    ft_putchar(str[index++]);
  }
}
/*
int main(int ac, char **av)
{
  if (ac != 2)
    ft_putchar('\n');
  else
    ft_putstr(av[1]);
}*/