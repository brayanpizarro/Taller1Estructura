#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Software.h"
using namespace std;

class Navegador:public Software{
    private:
    vector<string> listaNavegador;
    public:
    Navegador(string,string,int,int);
    ~Navegador();
    string MostrarLista();
    void agregarLista(string);
    void eliminar(string);
};
Navegador::Navegador(string nombre,string developer,int clasificacion,int precio):Software(nombre,developer,clasificacion,precio){}
void Navegador::agregarLista(string nuevo){
    listaNavegador.push_back(nuevo);
}