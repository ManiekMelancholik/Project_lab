#pragma once
#include "A.h"

A::A(){}
A::A(const int msi_liczba) {
	msi_publicLiczba = msi_liczba;
}

int A::pokazLiczbe() {
	return msi_publicLiczba;
}

void A::przypiszWartość(const int value) {
	msi_publicLiczba = value;
}

A::~A() {
	
}