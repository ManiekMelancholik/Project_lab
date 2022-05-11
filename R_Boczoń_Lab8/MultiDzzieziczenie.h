#pragma once
namespace multi {
	class A {
	public:
		A();
		virtual ~A();
	protected:
	
	private:
	};

	class B : virtual public A {
	public:
		B();
		~B();

	protected:
		
	private:

	};

	class C : virtual public A {
	public:
		C();
		~C();
	};

	class D : public B, public C {
	public:
		D();
		~D();
	};
}