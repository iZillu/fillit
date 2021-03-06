/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmuravch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 18:36:06 by hmuravch          #+#    #+#             */
/*   Updated: 2018/04/12 20:34:39 by hmuravch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int z;
	int search;

	i = 0;
	if (*needle == '\0')
		return ((char *)(haystack));
	while (haystack[i] != '\0')
	{
		z = 0;
		if (haystack[i] == needle[z])
		{
			search = i;
			while (haystack[i] == needle[z] && haystack[i] != '\0')
			{
				i++;
				z++;
			}
			if (needle[z] == '\0')
				return ((char *)(haystack + search));
			i = search;
		}
		i++;
	}
	return (0);
}
