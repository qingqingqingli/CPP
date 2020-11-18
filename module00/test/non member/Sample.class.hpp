/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 18:27:27 by qli           #+#    #+#                 */
/*   Updated: 2020/11/13 13:42:27 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	Sample(void);
	~Sample(void);

	// non member function
	// Question: Does a non member attribute always need to a non member function?
	static int getNbInst(void);

private:

	// non member attribute
	// number of instances: this information only makes sense at the class level
	static int _nbInst;

};

#endif
