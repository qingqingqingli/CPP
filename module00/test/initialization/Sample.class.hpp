/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 18:27:27 by qli           #+#    #+#                 */
/*   Updated: 2020/11/12 19:11:48 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	//attributes
	char a1;
	int a2;
	float a3;

	Sample(char p1, int p2, float p3);
	~Sample(void);

};

#endif
