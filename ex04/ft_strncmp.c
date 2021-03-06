/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 12:14:33 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/26 12:15:11 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < n)
		i++;
	if (i == n)
		i--;
	return (s1[i] - s2[i]);
}
