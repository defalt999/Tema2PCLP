#pragma once
#include<string>
#include<iostream>
using namespace std;
class Student{
private:
	int nrmat;
	string nume;
	double medie;
	double nota1;
	double nota2;
	double nota3;
public:
	Student(int nr, string nums, double n1, double n2, double n3);
	void setNote(double,double,double);
	string getNume();
	double getNota1();
	double getNota2();
	double getNota3();
	double getMedie();
	double getNrmat();
	void checkIntegralist();
	void checkBursa();


	

};