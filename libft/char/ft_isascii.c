/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:14:44 by vpolojie          #+#    #+#             */
/*   Updated: 2023/08/15 17:09:43 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_isascii -> checks if c is in the ascii table
*/

int	ft_isascii(int c)
{
	if ((0 <= c && c <= 127))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
