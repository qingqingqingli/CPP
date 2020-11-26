/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Xiaojing <Xiaojing@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 16:53:29 by Xiaojing      #+#    #+#                 */
/*   Updated: 2020/11/26 12:01:10 by Xiaojing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void  ft_bzero(void *str, size_t n)
{
	int i;
	i = 0;
	while (n > 0)
	{
		((unsigned char *)str)[i] = '\0';
		i++;
		n--;
	}
}
void  *ft_calloc(size_t count, size_t size)
{
	void *str;
	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}

static	int		str_len(char const *s, char c, int a)
{
	int		len;

	len = 0;
	while (s[a] != c && s[a] != '\0')
	{
		len++;
		a++;
	}
	return (len);
}

static	char	*fill_in(char *str, char const *s, int a, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		str[i] = s[a];
		i++;
		a++;
	}
	return (str);
}

static	char	**free_allo(char **array, int x)
{
	while (x > 0)
	{
		free(array[x - 1]);
		x--;
	}
	free(array);
	return (NULL);
}

static	char	**allocation(char **array, char const *s, char c)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			array[x] = ft_calloc((str_len(s, c, i) + 1), sizeof(char));
			if (!array[x])
				return (free_allo(array, x));
			fill_in(array[x], s, i, str_len(s, c, i));
			x++;
		}
		i++;
	}
	return (array);
}

char			**ft_split(char const *s, char c)
{
	char	**array;
	int		count;
	int		i;

	if (!s)
		return (NULL);
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	array = ft_calloc(count + 1, sizeof(char *));
	if (!array)
		return (NULL);
	array[count] = NULL;
	return (allocation(array, s, c));
}

int	main()
{
	char **test;
	char *s = "";
	int i = 0;

	test = ft_split(s, '\0');
	while (test[i] != NULL) {
		printf("%s\n", test[i]);
		i++;
	}
	printf("%s\n", test[i]);
	i++;
	return (0);
}