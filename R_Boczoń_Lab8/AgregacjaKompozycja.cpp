#pragma once
#include <iostream>
#include "AgregacjaKompozycja.h"

namespace agrkomp {

	namespace agr {
		A::A() { std::cout << "Constructed A" << std::endl; }
		A::~A() { std::cout << "DECONSTRUCTED A" << std::endl; }
		void A::FA() { std::cout << "Function A" << std::endl; }
		
		B::B(A& aObj) { *pa = aObj; std::cout << "Constructed B" << std::endl;}
		B::~B() { std::cout << "DECONSTRUCTED B" << std::endl; }
		void B::FB() { std::cout << "Function B: ..."; pa->FA(); }

	}

	namespace komp {
		Punkt::Punkt() { std::cout << "Punkt" << std::endl; }
		Punkt::~Punkt() { std::cout << "~Punkt" << std::endl; }

		Kolo::Kolo() { std::cout << "Kolo" << std::endl;}
		Kolo::~Kolo() { std::cout << "~Kolo" << std::endl; }
		void Kolo::WstawSrodek() { dPromienKola = 10; /*jakies operacje na punkcie*/ }
	}

}