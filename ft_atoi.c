/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:57:29 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/06/21 22:35:38 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	neg;
	int	i;

	res = 0;
	neg = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == '-')
	{
		if (str[i] == 45)
		neg *= -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		res = res * 10 + str[i] - 48;
		else
			break ;
		i++;
	}
	return (res * neg);
}
