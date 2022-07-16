/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoronha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:20:08 by lnoronha          #+#    #+#             */
/*   Updated: 2022/07/15 12:43:57 by lnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	letter;

	letter = 97;
	while (letter >= 97 && letter <= 122)
	{
		ft_putchar(letter);
		letter++;
	}
}

int	main()
{
	ft_print_alphabet();
	return (0);
}
