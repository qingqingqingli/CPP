/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 19:21:19 by qli           #+#    #+#                 */
/*   Updated: 2020/11/12 19:34:59 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	float const pi;
	int qd;

	Sample(float const f);
	~Sample(void);

	// const between ')' & ';' -> the instance of the class will never be altered
	void bar(void) const;
};

#endif
