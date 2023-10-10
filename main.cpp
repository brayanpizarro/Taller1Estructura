#include <iostream>
#include <string>
#include "Usuario.h"
#include "Administrador.h"
using namespace std;

int main()
{
    Usuario* vector[2];
    vector[0]=new Administrador("brayan","hasjkfaf",20,"brayan.jajaja@gmail.com");

    cout <<"nombre"<<endl;

    return 0;
}