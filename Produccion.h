#pragma once
#include "Softwere.h"
#include <iostream>
#include <string>
using namespace std;
class Produccion:public Software{
    private:
    string tipo;
    public:
    Produccion(string,string,int,int,string);
    string getTipo();
    void setTipo(string);
    
};
Produccion::Produccion(string nombre,string developer,int clasificacion,int precio,string tipo):Software(nombre,developer,clasificacion,precio){
    this->tipo=tipo;
}
string Produccion::getTipo(){
    return tipo;
}
void Produccion::setTipo(string tipo){
    this->tipo=tipo;
}