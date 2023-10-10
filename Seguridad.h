#pragma once
#include<iostream>
#include<string>
#include "Softwere.h"
using namespace std;

class Seguridad:public Software{
    private:
    string malware;
    public:
    Seguridad(string,string,int,int,string);
    string getMalware();
    void setMalware(string);
};
Seguridad::Seguridad(string nombre,string developer,int clasificacion,int precio,string malware):Software(nombre,developer,clasificacion,precio){
    this->malware=malware;
}
string Seguridad::getMalware(){
    return malware;
}
void Seguridad::setMalware(string malware){
    this->malware=malware;
}