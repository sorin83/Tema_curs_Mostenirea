// Tema_curs_Mostenirea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
# include "Angajat.h"
#include "Persoana.h"
#include "Student.h"

int main()
{
    Inginer* ing = new Inginer();
    Profesor* prof = new Profesor();
    Doctorand* doc = new Doctorand();
    StudentMaster* stdMas = new StudentMaster();
    StudentLicentiat* stdLic = new StudentLicentiat();

    ing-> softer();
    ing->companie();
    ing->persoanaMatura();
    prof->matematica();
    prof->univeristar();
    prof->persoanaActiva();
    doc->stiinte();
    doc->univ();
    doc->persoanaMatura();
    stdMas->Master();
    stdMas->univ();
    stdMas->persoanaActiva();
    stdLic->licentiat();
    stdLic->univv();
    stdLic->persoanaMatura();

    delete ing;
    delete prof;
    delete doc;
    delete stdLic;
    delete stdMas;

    

  
}

