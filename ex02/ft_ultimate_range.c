/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:12:06 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/26 11:12:57 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (range[0]);
	}
	len = max - min;
	*range = (int *)malloc((len+1));
	while (i < len)
	{
		range[0][i] = min + i;
		i++;
	}
	range[0][i] = 0;
	//range = &str;
	return (i);
}

