#pragma once
#include <iostream>
# include "MultiDzzieziczenie.h"
namespace multi {
	A::A() {
		std::cout << "A construct" << std::endl;
	}
	A::~A() {
		std::cout << "A destruct" << std::endl;
	}

	B::B() {
		std::cout << "B construct" << std::endl;
	}
	B::~B() {
		std::cout << "B destruct" << std::endl;
	}
	
	C::C() {
		std::cout << "C construct" << std::endl;
	}
	C::~C() {
		std::cout << "C destruct" << std::endl;
	}

	D::D() {
		std::cout << "D construct" << std::endl;
	}
	D::~D() {
		std::cout << "D destruct" << std::endl;
	}
}