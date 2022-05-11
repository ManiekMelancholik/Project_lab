#pragma once

namespace agrkomp {

	namespace agr {
		class A {
		public:
			A();
			~A();
			void FA();
		};

		class B {
		public:
			B(A&);
			~B();
			void FB();
		private:
			A * pa;
		};
	}

	namespace komp {
		class Punkt {
		public:
			Punkt();
			~Punkt();
		};

		class Kolo {
		public:
			Kolo();
			~Kolo();
			void WstawSrodek();
		private:
			double dPromienKola;
			Punkt srodekKola;
		};
	}

}