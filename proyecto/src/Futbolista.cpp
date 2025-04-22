#include "Deportista.h"
#include "Futbolista.h"
#include <iostream>
#include <string>
using namespace std;

void Futbolista::setPosicion(string posicion){
    this->posicion = posicion;
}
void Futbolista::setGoles(int goles){
    this->goles = goles;
}
void Futbolista::setAsistencias(int asistencias){
    this->asistencias = asistencias;
}
string Futbolista::getPosicion(){
    return posicion;
}
int Futbolista::getGoles(){
    return goles;
}
int Futbolista::getAsistencias(){
    return asistencias;
}