/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 13:52:15 by qli           #+#    #+#                 */
/*   Updated: 2020/11/17 17:37:41 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int j;

	i = 1;
	j = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE. *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			std::cout << (char)(std::toupper(argv[i][j]));
			j++;
		}
		if (i != argc - 1)
			std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}
