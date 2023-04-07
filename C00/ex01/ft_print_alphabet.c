/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:59:47 by marvin            #+#    #+#             */
/*   Updated: 2023/04/04 16:59:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h> // #include <unistd.h> 
void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_print_alphabet(void)
{
  int  a;

  a = 'a';
  while (a <= 'z')
  {
    ft_putchar(a);
    a++;
  }
}

