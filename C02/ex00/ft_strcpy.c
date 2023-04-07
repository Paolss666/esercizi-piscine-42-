/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 10:26:30 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/06 10:26:30 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <io.h>
//#include <string.h>

char  *ft_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  while (src[i])
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return(dest);
}
