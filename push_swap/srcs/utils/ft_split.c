/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <jtorreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:17:02 by jtorreir          #+#    #+#             */
/*   Updated: 2023/10/26 17:27:51 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static char	*ft_wordlen(const char *w, int inicio, int fim)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(((fim - inicio) + 1) * sizeof(char));
	while (inicio < fim)
		word[i++] = w[inicio++];
	word[i] = '\0';
	return (word);
}

static int	ft_wordcount(const char *str, char c)
{
	int	count;
	int	i;
	int	boo;

	i = 0;
	count = 0;
	boo = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && boo == 0)
		{
			boo = 1;
			count++;
		}	
		else if (str[i] == c)
			boo = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	n;
	size_t	m;
	int		i;
	char	**bruh;

	bruh = malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!s || !bruh)
		return (NULL);
	n = 0;
	m = 0;
	i = -1;
	while (n <= ft_strlen(s))
	{
		if (s[n] != c && i < 0)
			i = n;
		else if ((s[n] == c || n == ft_strlen(s)) && i >= 0)
		{
			bruh[m++] = ft_wordlen(s, i, n);
			i = -1;
		}
		n++;
	}
	bruh[m] = 0;
	return (bruh);
}
