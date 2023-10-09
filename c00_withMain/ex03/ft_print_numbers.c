/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgecgun <tgecgun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:57:56 by tgecgun           #+#    #+#             */
/*   Updated: 2023/07/17 18:32:09 by tgecgun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	rak;

	rak = '0';
	while (rak <= '9')
	{
		write(1, &rak, 1);
		rak++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
