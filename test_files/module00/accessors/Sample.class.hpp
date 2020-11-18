/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 18:27:27 by qli           #+#    #+#                 */
/*   Updated: 2020/11/12 21:54:00 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	Sample(void);
	~Sample(void);

	int		getFoo(void) const;
	void	setFoo(int v);

private:

	int		_foo;

};

#endif
