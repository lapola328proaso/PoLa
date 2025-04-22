#include "Deportista.h"
#include <iostream>
#include <string>
using namespace std;

void Deportista::setEdad(int edad){   
    this->edad = edad;
}
void Deportista::setFaltas (int faltas){
    this->faltas = faltas;
}
int Deportista::getEdad(){
    return edad;
}
int Deportista::getFaltas(){
    return faltas;
}