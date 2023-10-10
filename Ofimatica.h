#pragma once
#include "Softwere.h"
#include <iostream>
#include <string>
using namespace std;

class Ofimatica:public Software{
    private:
    int cantArchivos;
    public:
    Ofimatica(string,string,int,int,int);
    ~Ofimatica();
    int getCantArchivos();
    void setCantArchivos(int);
};
Ofimatica::Ofimatica(string nombre,string developer,int clasificacion,int precio,int cantArchivos):Software(nombre,developer,clasificacion,precio){this->cantArchivos=cantArchivos;}
Ofimatica::~Ofimatica(){}
int Ofimatica::getCantArchivos(){return cantArchivos;}
void Ofimatica::setCantArchivos(int cantArchivos){this->cantArchivos=cantArchivos;}
