// RBoczoń_Lab8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "A.h"
#include "TemplateClassA.cpp"
#include "MultiDzzieziczenie.h"
#include "NadpisywanieMetod.h"
#include "AgregacjaKompozycja.h"
int main()
{
    // Zadanie 3
    /*
    A* objA = new A(10);
    std::cout << objA->pokazLiczbe() << std::endl;
    
    objA->przypiszWartość(20);

    std::cout << objA->pokazLiczbe() << std::endl;
    //*/

    //  Zadanie 4
    /*
    templateClassA::A<std::string>* tA = new templateClassA::A<std::string>("Some class of string");
    tA->poakz_t();
    //*/

    //  Zadanie 5
    /*
    multi::D * d = new multi::D();

    delete(d);
    //*/
    
    //  Zadanie 6
    /*
    nadpisywanie::B* b = new nadpisywanie::B();
    b->F();
    nadpisywanie::A* a = b;
    a->F();
    b->FA();
    delete(a);
    //*/

    //  Zadanie 7
    //*
    /*
    using agrkomp::agr::B; {
        using agrkomp::agr::A; {

            A a = A();
            B* pB = new B(a);

            pB->FB();
            delete(pB);
            a.FA();
        }
    }//*/
    //*
    using agrkomp::komp::Kolo; {
        using agrkomp::komp::Punkt; {

            Kolo* pKolo = new Kolo();
            pKolo->WstawSrodek();
            delete(pKolo);

        }
    }//*/


    //*/

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
