//
// Created by qli on 28/11/2020.
//

#include "Sample.h"

int main(){
	Sample sample;
	float f = 3.14;

	sample.bar(5);
	sample.bar('c');
	sample.bar(f);
	sample.bar(sample);
	return 0;
}