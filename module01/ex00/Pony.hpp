/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/18 16:12:22 by qli           #+#    #+#                 */
/*   Updated: 2020/11/18 16:12:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <string>

class Pony {
private:
	int			_height;
	int			_weight;
	std::string _name;
	std::string	_skinColor;

public:
	void	ponyOnTheHeap(int height, int weight, const std::string &name, const std::string &skinColor);
	void 	ponyOnTheStack(int height, int weight, const std::string &name, const std::string &skinColor);
	int		getHeight();
	int		getWeight();
	std::string getName();
	std::string	getSkinColor();

	Pony(int height, int weight, const std::string &name, const std::string &skinColor);
	~Pony();

};

#endif