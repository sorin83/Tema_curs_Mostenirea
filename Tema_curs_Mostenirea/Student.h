#pragma once
#include <iostream>
#include "Persoana.h"

class Student :
    public Persoana
{
public:
    void univ();
    void univv();
    
};

class Doctorand : public Student
{
public:
    void stiinte();
};

class StudentMaster : public Student
{
public:
	void Master();
	
};

class StudentLicentiat : public Student
{
public:
    void licentiat();
};
