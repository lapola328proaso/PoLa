#include "Deportista.h"
#include "Basketbolista.h"
#include <iostream>
#include <string>
using namespace std;


void Basketbolista::setPosicion(string posicion){
    this->posicion = posicion;
}
void Basketbolista::setPuntos(int puntos){
    this->puntos = puntos;
}
void Basketbolista::setRebotes(int rebotes){
    this->rebotes = rebotes;
}
void Basketbolista::setAsistencias(int asistencias){
    this->asistencias = asistencias;
}
void Basketbolista::setAltura(double altura){
    this->altura = altura;
}

string Basketbolista::getPosicion(){
    return posicion;
}
int Basketbolista::getPuntos(){
    return puntos;
}
int Basketbolista::getRebotes(){
    return rebotes;
}
int Basketbolista::getAsistencias(){
    return asistencias;
}
double Basketbolista::getAltura(){
    return altura;
}