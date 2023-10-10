#pragma once
#include "Software.h"
#include <string>
#include <iostream>
using namespace std;
class Social:public Software{
    private:
    int CantAmigos;
    public:
    Social(string,string,int,int,int);
    ~Social();
    int getCantAmigos();
    void setCantAmigos(int);
};
Social::Social(string nombre,string developer,int clasificacion,int precio,int CantAmigos):Software(nombre,developer,clasificacion,precio){
    this->CantAmigos=CantAmigos;
}
Social::~Social(){}
int Social::getCantAmigos(){
    return CantAmigos;
}
void Social::setCantAmigos(int CantAmigos){
    this->CantAmigos=CantAmigos;
}