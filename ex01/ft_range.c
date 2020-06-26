/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:09:48 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/26 11:10:41 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int  *ft_range(int min, int max)
{
	int *str;
	int i;
	int len;


  if (min >= max)
  {
    return (NULL);
  }

	i = 0;
	len = max - min;
	str = (int *)malloc(sizeof(min) * len);
	while (i < len)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
