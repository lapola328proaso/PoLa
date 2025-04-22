#ifndef BASKETBOLISTA_H
#include <iostream>
using namespace std;
#include <string>
#include "Deportista.h"
#include "Credencial.h"

class Basketbolista : public Deportista {
private:
   
protected:
    string posicion;
    int puntos;
    int rebotes;
    int asistencias;
    double altura;

public:
    void setPosicion(string posicion);
    void setPuntos(int puntos);
    void setRebotes(int rebotes);
    void setAsistencias(int asistencias);
    void setAltura(double altura);
    
    string getPosicion();
    int getPuntos();
    int getRebotes();
    int getAsistencias();
    double getAltura();
};

#endif // BASKETBOLISTA_H
