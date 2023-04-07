/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:59:23 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/07 10:59:23 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h>
// #include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i])
    ft_putchar(str[i++]);
}

int ft_strcmp(char *s1, char *s2)
{
  int i;

  i = 0;
  while (s1[i] && s2[i] && s1[i]== s2[i])
    i++;
  return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main(int  ac, char **av)
{
  int i;
  char  *tamp;

  i = 1;
  while (i < ac - 1)
  {
    if (ft_strcmp(av[i], av[i + 1]) > 0)
    {
      tamp = av[i];
      av[i] = av[i + 1];
      av[i + 1] = tamp;
      i = 0;
    }
    i++;
  }
  i = 1;
  while (i < ac)
  {
    ft_putstr(av[i++]);
    ft_putchar('\n');
  }
  return (0);
}