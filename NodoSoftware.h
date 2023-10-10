#pragma once
#include <iostream>
#include "Software.h"

class NodoSoftware{
    private:
    Software* software;
    NodoSoftware* siguiente;
    
    public:
    NodoSoftware();
    ~NodoSoftware();
    Software* getSoftware();
    void setSoftware(Software*);
    NodoSoftware* getSiguiente();
    void setSiguiente(NodoSoftware*);
};
NodoSoftware::NodoSoftware(){
    software=nullptr;
    siguiente=nullptr;
}
NodoSoftware::~NodoSoftware(){
}Software* NodoSoftware::getSoftware(){
    return software;
}void NodoSoftware::setSoftware(Software* software){
    this->software=software;
}NodoSoftware* NodoSoftware::getSiguiente(){
    return siguiente;
}void NodoSoftware::setSiguiente(NodoSoftware* siguiente){
    this->siguiente=siguiente;
}