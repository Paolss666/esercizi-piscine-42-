/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 10:30:31 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/06 10:30:31 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <io.h>
//#include <unistd.h>

char  *ft_strncpy(char  *dest, char *src,unsigned int n)
{
  unsigned int  i;

  i = 0;
  while (src[i] && i < n)
  {
    dest[i] = src[i];
    i++;
  }
  while (i < n)
  {
    dest[i] = '/0';
    i++;
  }
  return (dest);
}