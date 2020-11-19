/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 16:49:02 by qli           #+#    #+#                 */
/*   Updated: 2020/11/19 16:49:02 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H

#include <string>

# define RESET			"\033[0m"
# define BLACK			"\033[30m"				/* Black */
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */
# define WHITE			"\033[37m"				/* White */
# define BOLDBLACK		"\033[1m\033[30m"		/* Bold Black */
# define BOLDRED		"\033[1m\033[31m"		/* Bold Red */
# define BOLDGREEN		"\033[1m\033[32m"		/* Bold Green */
# define BOLDYELLOW		"\033[1m\033[33m"		/* Bold Yellow */
# define BOLDBLUE		"\033[1m\033[34m"		/* Bold Blue */
# define BOLDMAGENTA	"\033[1m\033[35m"		/* Bold Magenta */
# define BOLDCYAN		"\033[1m\033[36m"		/* Bold Cyan */
# define BOLDWHITE		"\033[1m\033[37m"		/* Bold White */

enum Weight {
	lowestWeight = 50,
	highestWeight = 300
};


class Pony {
public:
	static void	ponyOnTheStack(float weight, const std::string &name);
	static void	ponyOnTheHeap(float weight, const std::string &name);
	float		getWeight() const;
	void		setWeight(float userInput);
	std::string	getName() const;
	Pony(const std::string &name, const std::string &location);
	~Pony();

private:
	float _weight;
	std::string	_name;
};


#endif //PONY_H
