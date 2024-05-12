#include <iostream>
#include "grupa.h"


void grupa::adaugaStudent(Student x) {
	elevi.push_back(x);

}

void grupa::afisareStudent() {
	for (int i = 0; i < elevi.size(); i++) {
		cout << elevi[i].getNume()<<endl;
	}
}

void grupa::stergeNepromovat() {
	for (int i = 0; i < elevi.size(); i++) {
		if (elevi[i].getNota1() < 5 && elevi[i].getNota2() < 5 && elevi[i].getNota3() < 5) {
			elevi.erase(elevi.begin() + i);
		}
	}
		
}

void grupa::checkGrupa(Student xy) {
	bool gasit=false;
	for (int i = 0; i < elevi.size(); i++) {
		if (elevi[i].getNrmat() == xy.getNrmat()) {
			cout << "Apartine grupei";
			gasit = true;
		}

	}
	if (gasit == false) {
		cout << "Nu apartine";
	}
}