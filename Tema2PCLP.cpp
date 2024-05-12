#include <iostream>
#include "student.h"
#include "grupa.h"
using namespace std;

int main()
{
    grupa calc1;
    Student t1(6969, "Denis", 4, 6, 4);
    Student t2(420, "Sorin", 10, 10, 10);
    Student t3(3, "Marcel", 6, 3, 3);
    calc1.adaugaStudent(t1);
    calc1.adaugaStudent(t2);
    calc1.checkGrupa(t2);

    
}

