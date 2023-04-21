/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:25:19 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/06 16:25:19 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
  unsigned  int i;

  i = 0;
  if (n == 0)
  {
    return (0);
  }
  while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
  {
    i++;
  }
  return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}