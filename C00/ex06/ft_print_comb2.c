/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:58:51 by marvin            #+#    #+#             */
/*   Updated: 2023/04/04 17:58:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h> // #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int nb)
{
	int		a;
	int		b;

	if (nb > 9)
	{
		a = nb / 10;
		b = nb % 10;
		ft_putchar(a + 48);
		ft_putchar(b + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a);
			ft_putchar(' ');
			print(b);
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}