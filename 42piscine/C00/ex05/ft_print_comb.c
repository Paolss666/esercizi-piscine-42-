/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:36:50 by marvin            #+#    #+#             */
/*   Updated: 2023/04/04 17:36:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h> // #include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  print(char a, char b, char c)
{
  ft_putchar(a);
  ft_putchar(b);
  ft_putchar(c);

  if(a != 7)
  {
    ft_putchar(',');
    ft_putchar(' ');
  }
}

void  ft_print_comb(void)
{
  int a;
  int b;
  int c;

  a = '0';
  while(a <= '7')
  {
    b = a + 1;
    while (b <= '8')
    {
      c = b + 1;
      while (c <= '9')
      {
        print(a, b, c);
        c++;
      }
      b++;
    }
    a++;
  }
}