/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmichaud <jmichaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:06:53 by jmichaud          #+#    #+#             */
/*   Updated: 2016/11/08 16:13:56 by jmichaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_iscntrl(int c)
{
	if ((c >= 0 && c <= 31) ||
		c == 127)
		return (1);
	else
		return (0);
}
