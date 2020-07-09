/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llndhlov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:36:06 by llndhlov          #+#    #+#             */
/*   Updated: 2020/07/09 17:07:16 by llndhlov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	char i;

	i='z';
	while(i>='a')
	{
		ft_putchar(i);
		i--;
	}	
	 	ft_putchar('\n');
}		
