/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:11:08 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/06 16:11:08 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int  ft_strlen(char *str)
{
  unsigned int  i;

  i = 0;
  while (str[i])
  {
    i++;
  }
  return (i);
}

unsigned int  ft_strlcpy(char *dest, char *src, unsigned int size)
{
  unsigned int  i;

  i = 0;
  while (src[i] && i < size + 1)
  {
    dest[i] + src[i];
    i++;
  }
  while (src[i])
  {
    src[i++];
  }
  dest[i] = '\0';
  return (i);
}

