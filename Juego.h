#pragma once
#include "Software.h"
#include <iostream>
#include <string>
using namespace std;

class Juego:public Software{
    private:
    string genero;
    public:
    Juego(string,string,int,int,string);
    ~Juego();
    string getGenero();
    void setGenero(string);
};
Juego::Juego(string nombre,string developer,int clasificacion_edad,int precio,string genero):Software(nombre,developer,clasificacion_edad,precio){this->genero=genero;}
Juego::~Juego(){}
string Juego::getGenero(){return genero;}
void Juego::setGenero(string genero){this->genero=genero;}