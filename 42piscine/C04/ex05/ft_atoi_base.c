/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:53:10 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/06 16:53:10 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> 
// #include <io.h> 

int		ft_to_find(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		check_error(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == '\f' ||
				base[i] == '\t' || base[i] == '\n' || base[i] == '\r' ||
				base[i] == '\v' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int		neg;
	int		numb;
	int		size;
	int		i;
	int		doug;

	i = 0;
	neg = 1;
	numb = 0;
	if ((size = check_error(base)) > 1)
	{
		while (str[i] == '\f' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == '\r' || str[i] == '\v' || str[i] == ' ')
			i++;
		while (str[i] == '-' || str[i] == '+')
			neg *= (str[i++] == '-') ? -1 : 1;
		while (str[i] && (!(doug = ft_to_find(str[i], base) == -1)))
			numb = numb * size + ft_to_find(str[i++], base);
		if (doug == -1)
			return (0);
	}
	return (numb * neg);
}