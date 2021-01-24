//
// Created by qli on 24/01/2021.
//

#pragma once

template <typename T>
class Array {

public:
	Array() : _array(new T[]()){}
	Array()
	~Array() {delete _array;}

private:
	T* _array;

};
