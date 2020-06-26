/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:13:46 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/26 11:14:58 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_concat_params(int argc, char **argv)
{
  int length;
  int i;
  char *str;
  
  length = cal_length(argc, argv);
  str = malloc(sizeof(str) * (length + 1));
  
  i = 1;
  while (i < argc)
  {
    str= ft_strcat(str, argv[i]);
    i++;
  }
  
  str[length + argc - 2] = '\0';
  return(str);
}
