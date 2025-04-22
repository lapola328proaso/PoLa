#ifndef NADADOR_H
#include <iostream>
using namespace std;
#include <string>
#include "Deportista.h"
#include "Credencial.h"

class Nadador : public Deportista {
private:

protected:
    string estilo;
    double MetrosNadados;

public:
    void setEstilo(string estilo);
    void setMetrosNadados(double MetrosNadados);
    string getEstilo();
    double getMetrosNadados();
};
#endif // NADADOR_H  