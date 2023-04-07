/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:46:00 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/06 16:46:00 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h>

int ft_atoi(char *str)
{
  int i;
  int numb;
  int neg;

  i = 0;
  numb = 0;
  neg = 1;
  while (str[i] == '\f' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb = numb * 10 + str[i] - '0';
		i++;
	}
	return (numb * neg);
}