#include <iostream>
using namespace std;
#include <string>
#include "Deportista.h"
#include "Nadador.h"

void Nadador::setEstilo(string estilo){
    this->estilo = estilo;
}
void Nadador::setMetrosNadados(double MetrosNadados){
    this->MetrosNadados = MetrosNadados;
}
string Nadador::getEstilo(){
    return estilo;
}
double Nadador::getMetrosNadados(){
    return MetrosNadados;
}