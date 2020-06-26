/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 12:33:26 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/26 12:34:04 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int 	i;

	i = -1;
	while (str[++i])
		if (!((str[i] >= 'a' && str[i] <= 'z') ||
			 (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
	return (1);
}