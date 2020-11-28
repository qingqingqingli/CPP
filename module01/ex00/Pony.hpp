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
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */

enum Weight {
	lowestWeight = 50,
	highestWeight = 300
};

class Pony {
public:
	static void		ponyOnTheStack(float weight, const std::string &name);
	static void		ponyOnTheHeap(float weight, const std::string &name);
	float			getWeight() const;
	void			setWeight(float userInput);
	std::string		getName() const;
	Pony(const std::string &name, const std::string &location);
	~Pony();

private:
	float 			_weight;
	std::string		_name;
};

#endif //PONY_H
