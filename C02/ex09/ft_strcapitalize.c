/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 10:59:06 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/06 10:59:06 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char  *ft_strlowcase(char *str)
{
  int i;

  i = 0;
  while(str[i])
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] = str[i] + 32;
    }
    i++;
  }
  return (str);
}

int ft_str_is_sep(char  str)
{
  if ((str >= ' ' && str <= '/') || (str >= ':' && str <= '@') || (str >= '[' && str <= '`') || (str >= '{' && str <= '~'))
  {
    return (1);
  }
  return (0);
}

char  *ft_strcapitalize(char *str)
{
  int i;
  int verif;

  i = 0;
  ft_strlowcase(str);
  if (str[i] >= 'a' && str[i] <= 'z')
  {
    str[i] = str[i] - 32;
    i++;
  }
  while (str[i] != '\0' && str[i + 1] != '\0')
  {
    verif = ft_str_is_sep(str[i]);
    if ((verif == 1) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
    {
      str[i + 1] = str[i + 1] - 32;
    }
    i++;
  }
  return (str);
}