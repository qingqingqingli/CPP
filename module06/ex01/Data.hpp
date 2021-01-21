/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 12:24:47 by qli           #+#    #+#                 */
/*   Updated: 2021/01/21 12:24:47 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

struct Data {
	std::string s1;
	int n;
	std::string s2;
} ;
