#include <iostream>
using namespace std;
#include <string>
#include "Deportista.h"
#include "Credencial.h"

void Credencial::setNombre(string nombre){
    this->nombre = nombre;
}
void Credencial::setCodigo(string codigo){
    this->codigo = codigo;
}
void Credencial::setPrograma(string programa){
    this->programa = programa;
}
void Credencial::setDocumento(string documento){
    this->documento = documento;
}

string Credencial::getNombre(){
    return nombre;
}
string Credencial::getCodigo(){
    return codigo;
}
string Credencial::getPrograma(){
    return programa;
}
string Credencial::getDocumento(){
    return documento;
}