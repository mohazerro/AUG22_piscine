/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:17:23 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/14 20:17:26 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (!(str[x] >= 'A' && str[x] <= 'Z'))
			return (0);
		x++;
	}
	return (1);
}
