#pragma once
#include "TemplateClassA.h"
#include <iostream>

namespace templateClassA {
	template<typename T>
	A<T>::A() {};

	template<typename T>
	A<T>::A(T t) {
		this->t = t;
	}

	template<typename T>
	void A<T>::poakz_t() {
		std::cout << t << std::endl;
	}

}
