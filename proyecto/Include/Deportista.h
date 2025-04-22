#ifndef DEPORTISTA_H
#include <iostream>
using namespace std;
#include <string>
class Deportista {

private:
    

public:
    void setEdad(int edad);
    void setFaltas (int faltas);
    int getEdad();
    int getFaltas();

protected:
    int edad;
    string deporte;
    int faltas;
};
#endif // DEPORTISTA_H