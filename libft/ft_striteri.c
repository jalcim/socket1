/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 22:54:44 by jalcim            #+#    #+#             */
/*   Updated: 2013/12/01 23:16:41 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int compt;
	compt = -1;

	while (s[++compt] != '\0')
		(*f)(compt, &s[compt]);
}
