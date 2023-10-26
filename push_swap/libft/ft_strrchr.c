/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:26:42 by jtorreir          #+#    #+#             */
/*   Updated: 2022/11/30 13:31:47 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		i;

	s = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char) c)
			s = (char *)&str[i];
		i++;
	}
	if (str[i] == (char )c)
		return ((char *)&str[i]);
	return (s);
}

/*int main () 
{
   const char str[] = "teste";
   int ch = 's';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/
