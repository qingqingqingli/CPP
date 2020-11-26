//
// Created by Qing Li on 11/26/20.
//

#include <stdio.h>
#include <stdlib.h>

static void		ft_malloc_free(char **dst, int n)
{
	while (n > 0)
	{
		n--;
		free(dst[n]);
	}
	free(dst);
}

static char		*ft_word_create(char const *s, char c)
{
	char	*word;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		len++;
	}
	i = 0;
	word = (char *)malloc(sizeof(char) * (len + 1));
	while (s[i] != '\0' && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int		ft_array_create(char **dst, char const *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			dst[n] = ft_word_create(s, c);
			if (!dst[n])
			{
				ft_malloc_free(dst, n);
				return (-1);
			}
			n++;
		}
		while (s[i] != c && s[i] != '\0')
			s++;
		while (s[i] == c && s[i] != '\0')
			s++;
	}
	dst[n] = NULL;
	return (0);
}

static size_t	ft_word_amount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c)
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**dst;
	size_t	word_amount;

	if (!s)
		return (0);
	word_amount = ft_word_amount(s, c);
	dst = (char **)malloc(sizeof(char *) * (word_amount + 1));
	if (dst == 0)
		return (0);
	if (ft_array_create(dst, s, c) == -1)
		return (0);
	return (dst);
}

int	main()
{
	char **test;
	char *s = "AFDSFADSF";
	int i = 0;

	test = ft_split(s, '\0');
	while (test[i] != NULL) {
		printf("%s\n", test[i]);
		i++;
	}
	printf("%s\n", test[i]);
	return (0);
}