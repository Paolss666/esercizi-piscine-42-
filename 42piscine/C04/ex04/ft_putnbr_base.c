/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:50:24 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/06 16:50:24 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h> // #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_error(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] <= 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j]) // on regarde si on à la meme base check !!! 
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int			nb;
	unsigned int			size;

	size = check_error(base);
	if (size > 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nb = -nbr;
		}
		else
			nb = nbr;
		if (nb >= size)
		{
			ft_putnbr_base(nb / size, base); //on cherche le nobre/ lettre dans notre base !! decimale 
			ft_putnbr_base(nb % size, base); // unité 
		}
		else
			ft_putchar(base[nb]); // si on trouve le nombre da notre base !!! 
	}
}