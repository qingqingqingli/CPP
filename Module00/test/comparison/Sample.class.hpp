/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 18:27:27 by qli           #+#    #+#                 */
/*   Updated: 2020/11/12 22:18:38 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	Sample(int v);
	~Sample(void);

	int	getFoo(void) const;
	// taking as a parameter (the address of a sample instance). Making a
	// comparison between the current instance and the passed parameter instance
	int	compare(Sample *other) const ;

private:

	int	_foo;

};

#endif
