#include <vector>
#include <iostream>
#include "student.h"
using namespace std;


class grupa {
private:
	vector<Student> elevi;
public:
	void adaugaStudent(Student x);
	void afisareStudent();
	void stergeNepromovat();
	void checkGrupa(Student x);
	
};