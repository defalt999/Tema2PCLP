#include "student.h"
#include <iostream>
using namespace std;

Student::Student(int nr, string nums, double n1, double n2, double n3) {
	nrmat = nr;
	nume = nums;
	nota1 = n1;
	nota2 = n2;
	nota3 = n3;
}

 void Student::setNote(double x, double y, double z) {
	 nota1 = x;
	 nota2 = y;
	 nota3 = z;
}

 double Student::getNota1() {
	 return nota1;
 }
 double Student::getNota2() {
	 return nota2;
 }
 double Student::getNota3() {
	 return nota3;
 }

 double Student::getMedie() {
	 double medie;
	 medie = (nota1 + nota2 + nota3) / 3;
	 return medie;
 }

 void Student::checkIntegralist() {
	 if (nota1 >= 5 && nota2 >= 5 && nota3 >= 5) {
		 cout << "Studentul este Integralist";
	 }
	 else {
		 cout << "Studentul nu este Integralist";
	 }
 }

 void Student::checkBursa() {
	 double medie;
	 medie = (nota1 + nota2 + nota3) / 3;
	 if (medie >= 9.5) {
		 cout << "Studentul are bursa de merit";
	 }
	 else if (medie >= 8.50) {
		 cout << "Studentul are bursa de studii";
	 }
	 else {
		 cout << "Studentul nu are bursa";
	 }

 }

 string Student::getNume() {
	 return nume;
 }

 double Student::getNrmat() {
	 return nrmat;
 }