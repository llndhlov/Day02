/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llndhlov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 09:20:13 by llndhlov          #+#    #+#             */
/*   Updated: 2020/07/09 16:38:27 by llndhlov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}	

void	ft_print_alphabet(void)
{
	char i;

	i='a';
	while (i <= 'z')
	    {
			ft_putchar(i);
			i++;
			
		}
			ft_putchar('\n');
}	
