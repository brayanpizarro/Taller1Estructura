#pragma once
#include "Usuario.h"
#include <iostream>
#include <string>
using namespace std;

class Administrador:public Usuario {
    private:
    string mail;
    public:
    Administrador(string,string,int,string);
    ~Administrador();
    string getMail();
    void setMail(string);

};
Administrador::Administrador(string _nombre,string _contraseña,int _edad,string _mail):Usuario(_nombre,_contraseña,_edad){
    mail=_mail;
}
Administrador::~Administrador(){
    
}
string Administrador::getMail(){
    return mail;
}
void Administrador::setMail(string mail){
    this->mail=mail;
}