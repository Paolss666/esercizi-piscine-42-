/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:33:49 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/06 16:33:49 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;
	unsigned int	destlen;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (size <= destlen)
		srclen = srclen + size;
	else
		srclen = srclen + destlen;
	if (size > destlen)
	{
		while (src[i] && (destlen + 1) < size)
		{
			dest[destlen] = src[i];
			i++;
			destlen++;
		}
	}
	dest[destlen] == '\0';
	return (srclen);
}