#pragma once

namespace nadpisywanie {
	class A {
	public:
		A();
		~A();
		virtual void F();
	};

	class B : public A {
	public:
		B();
		~B();
		void F() override;
		void FA();
	};
}