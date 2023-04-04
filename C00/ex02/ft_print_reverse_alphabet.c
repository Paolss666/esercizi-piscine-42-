/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:13:25 by marvin            #+#    #+#             */
/*   Updated: 2023/04/04 17:13:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h>
void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_print_reverse_alphabet(void)
{
  int z;

  z = 'z';
  while (z >= 'a')
  {
    ft_putchar(z);
    z--;
  }
}
