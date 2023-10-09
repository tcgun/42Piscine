/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgecgun <tgecgun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:34:48 by tgecgun           #+#    #+#             */
/*   Updated: 2023/07/17 17:34:49 by tgecgun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	say;

	say = 122;
	while (say >= 97)
	{
		write(1, &say, 1);
		say--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
