/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgecgun <tgecgun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:42:49 by tgecgun           #+#    #+#             */
/*   Updated: 2023/07/17 15:42:53 by tgecgun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	say;

	say = 97;
	while (say <= 122)
	{
		write(1, &say, 1);
		say++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
