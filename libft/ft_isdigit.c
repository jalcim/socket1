/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:53:30 by jalcim            #+#    #+#             */
/*   Updated: 2013/12/01 22:03:39 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isdigit(int	c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
