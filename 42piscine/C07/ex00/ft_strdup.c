/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:40:01 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/07 11:40:01 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <io.h>
// #include <unistd.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char  *ft_strdup(char *src)
{
  int   size;
  char  *str;
  int   i;

  i = 0;
  str = NULL;
  size = ft_strlen(src) + 1;
  if (src == NULL)
    return (NULL);
  str = (char *)malloc(sizeof(char) * size);
  if (!(str))
    return (NULL);
  while (src[i])
  {
    str[i] = src[i];
    i++;
  }
  str[i] = '\0';
  return (str);
}
/*
int main(int ac, char **av)
{
  if (ac < 2)
    ft_putstr("Error");
  else
    ft_putstr(ft_strdup(av[1]));
  ft_putchar('\n');
}*/