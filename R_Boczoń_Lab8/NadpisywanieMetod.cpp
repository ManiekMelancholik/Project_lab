#pragma once
#include <iostream>
#include "NadpisywanieMetod.h"

namespace nadpisywanie {
	A::A() { std::cout << "A contructor called" << std::endl; }
	A::~A() { std::cout << "A destructor called" << std::endl; }
	void A::F() { std::cout << "F in A" << std::endl; }

	B::B() :A() { std::cout << "B constructor called" << std::endl; }
	B::~B() { std::cout << "B destructor called" << std::endl; }
	void B::F() { std::cout << "F in B" << std::endl;}
	void B::FA(){ A::F(); }

}