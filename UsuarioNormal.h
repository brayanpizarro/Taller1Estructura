#pragma once
#include "Usuario.h"
#include <iostream>
#include <string>
using namespace std;

class UsuarioNormal:public Usuario{
    private:
    string correo;
    //log
    public:
    UsuarioNormal(string,string,int,string);
    ~UsuarioNormal();
    string getCorreo();
    void setCorreo(string);
};
UsuarioNormal::UsuarioNormal(string nombre,string contrasena,int edad,string correo):Usuario(nombre,contrasena,edad){
    this->correo=correo;
}
UsuarioNormal::~UsuarioNormal(){
    
}
string UsuarioNormal::getCorreo(){
    return correo;
}
void UsuarioNormal::setCorreo(string correo){
    this->correo=correo;
}