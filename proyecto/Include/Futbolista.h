#ifndef FUTBOLISTA_H
#include <iostream>
using namespace std;
#include <string>
#include "Deportista.h"
#include "Credencial.h"

class Futbolista : public Deportista {

private:

protected:
    string posicion;
    int goles;
    int asistencias;

public:
    void setPosicion(string posicion);
    void setGoles(int goles);
    void setAsistencias(int asistencias);
    string getPosicion();
    int getGoles();
    int getAsistencias();
};
#endif // FUTBOLISTA_H
