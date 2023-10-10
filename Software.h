#pragma once
#include <string>
#include <iostream>
using namespace std;
class Software{
    private:
    string nombre;
    string developer;
    int clasificacion_edad;
    //lista de usuarios;
    int precio;
    
    public:
    Software(string,string,int,int);
    ~Software();
    string getNombre();
    void setNombre(string);
    string getDeveloper();
    void setDeveloper(string);
    int getClasificacion_edad();
    void setClasificacion_edad(int);
    int getPrecio();
    void setPrecio(int);
};
Software::Software(string nombre,string developer,int clasificacion_edad,int precio){
    this->nombre=nombre;
    this->developer=developer;
    this->clasificacion_edad=clasificacion_edad;
    this->precio=precio;
}
Software::~Software(){
    
}
//borrar codigo ineceserio
string Software::getNombre(){
    return nombre;
}void Software::setNombre(string nombre){
    this->nombre=nombre;
}string Software::getDeveloper(){
    return developer;
}void Software::setDeveloper(string developer){
    this->developer=developer;
}int Software::getClasificacion_edad(){
    return clasificacion_edad;
}void Software::setClasificacion_edad(int clasificacion_edad){
    this->clasificacion_edad=clasificacion_edad;
}int Software::getPrecio(){
    return precio;
}void Software::setPrecio(int precio){
    this->precio=precio;
}