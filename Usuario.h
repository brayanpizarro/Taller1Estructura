#pragma once
#include <iostream>
#include <string>
#include "NodoSoftware.h"
#include "Software.h"
using namespace std;
class Usuario{
    private:
    string nombre,contraseña;
    int edad;
    NodoSoftware* cabeza;
    
    public:
    Usuario(string,string,int);
    ~Usuario();
    string getNombre();
    void setNombre(string);
    string getContraseña();
    void setContraseña(string);
    int getEdad();
    void setEdad(int);
    void descargarSoftwere(Software*);
    
};
Usuario::Usuario(string _nombre,string _contraseña,int _edad){
    nombre=_nombre;
    contraseña=_contraseña;
    edad=_edad;
    cabeza=new NodoSoftware();
    
}
Usuario::~Usuario(){
    
}
string Usuario::getNombre(){
    return nombre;
}
void Usuario::setNombre(string nombre){
    this->nombre=nombre;
}
string Usuario::getContraseña(){
    return contraseña;
}
void Usuario::setContraseña(string contraseña){
    this->contraseña=contraseña;
}
int Usuario::getEdad(){
    return edad;
}
void Usuario::setEdad(int edad){
    this->edad=edad;
}
void Usuario::descargarSoftwere(Software* softwere){
    
}