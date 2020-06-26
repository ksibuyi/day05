/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:10:18 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/26 09:26:34 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while(*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return start;
}

