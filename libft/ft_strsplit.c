/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:06:10 by hyshin            #+#    #+#             */
/*   Updated: 2019/10/31 15:32:28 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(const char *s, char c)
{
	int sp;
	int sp_tmp;

	sp = 0;
	sp_tmp = 0;
	while (*s)
	{
		if (sp_tmp == 1 && *s == c)
			sp_tmp = 0;
		if (sp_tmp == 0 && *s != c)
		{
			sp_tmp = 1;
			sp++;
		}
		s++;
	}
	return (sp);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		sp;
	char	**tab;
	int		start;

	if ((s == 0) || (c == 0))
		return (NULL);
	sp = ft_count_words(s, c);
	tab = malloc((sizeof(char *) * (sp + 1)));
	i = 0;
	j = -1;
	while (++j < sp)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		tab[j] = ft_strsub(s, start, i - start);
		i++;
	}
	tab[j] = NULL;
	return (tab);
}
