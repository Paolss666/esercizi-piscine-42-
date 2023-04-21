/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:36:47 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/07 10:36:47 by npaolett         ###   ########.fr       */
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

int main(int  ac, char **av)
{
  if(ac == 1)
    ft_putstr(av[0]);
  ft_putchar('\n');
}