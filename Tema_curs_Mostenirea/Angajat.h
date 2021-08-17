#pragma once
#include <iostream>
#include "Persoana.h"

class Angajat :
    public Persoana
{
public:
    void univeristar();
    void companie();
};

class Profesor : public Angajat
{
public:
    void matematica();
};

class Inginer : public Angajat
{
public:
    void softer();
};

