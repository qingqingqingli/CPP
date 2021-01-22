
#pragma once

class Base {public: virtual ~Base(void){}};

class A : public Base {public:	A(){std::cout << "A" << std::endl;} void print(){std::cout << "AA" << std::endl;}};
class B : public Base {public:	B(){std::cout << "B" << std::endl;} void print(){std::cout << "BB" << std::endl;}};
class C : public Base {public:	C(){std::cout << "C" << std::endl;} void print(){std::cout << "CC" << std::endl;}};