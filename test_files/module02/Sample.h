//
// Created by qli on 28/11/2020.
//

#ifndef EX01_SAMPLE_H
#define EX01_SAMPLE_H


class Sample {
public:
	Sample();
	~Sample();

	void bar(char const c) const;
	void bar(int const n) const;
	void bar(float const z) const;
	void bar(Sample const & i) const;
};


#endif //EX01_SAMPLE_H
