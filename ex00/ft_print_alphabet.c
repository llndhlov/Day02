/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llndhlov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 09:20:13 by llndhlov          #+#    #+#             */
/*   Updated: 2020/07/09 17:53:59 by llndhlov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
