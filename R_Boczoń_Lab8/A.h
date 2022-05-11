#pragma once

class A {
public:
	A();
	A(const int);
	int msi_publicLiczba;
	int pokazLiczbe();
	void przypiszWartość(const int);
	~A();
protected:
	int mi_protLiczba;

private:
	int mi_privLiczba;
};


