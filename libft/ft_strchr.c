/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:27:14 by jtorreir          #+#    #+#             */
/*   Updated: 2022/11/30 13:32:13 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char )c)
		return ((char *)&str[i]);
	return (NULL);
}

// int main () {
//    const char str[] = "teste";
//    int ch = 1024;
//    char *ret;

//    ret = ft_strchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);

//  ret = strchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
//    return(0);
// }