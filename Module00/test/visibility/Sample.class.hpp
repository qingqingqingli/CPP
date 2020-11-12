/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 18:27:27 by qli           #+#    #+#                 */
/*   Updated: 2020/11/12 20:00:28 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	int publicFoo;

	// need to consider what makes more sense to place the constructor
	// and destructor in private or public
	Sample(void);
	~Sample(void);

	void publicBar(void) const;

private:

	// use _ prefix for all private identifier
	// it gives reader a quick idea of which is public or private
	int _privateFoo;

	void _privateBar(void) const;
};

#endif
